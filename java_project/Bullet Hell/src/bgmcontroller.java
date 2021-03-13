import java.io.File;
import javax.sound.sampled.*;

/*
 * Bgmcontroller class for annoying in-game music.
 */

public class bgmcontroller implements soundint{

	//Initialise required variables
	Clip clip; 
	AudioInputStream inputStream; 
	File file_path = new File("Bullet Hell/resources/sound/");
	public bgmcontroller() {};
	
	//Function to create object. 
	public bgmcontroller(String soundname) {	
		try {
			file_chk();
			clip = AudioSystem.getClip();
			File file = new File("Bullet Hell/resources/sound/" + soundname);
			AudioInputStream inputStream = AudioSystem.getAudioInputStream(file);
			clip = AudioSystem.getClip();
			clip.open(inputStream);
		}
		catch (Exception e) {
			System.err.println(e.getMessage());
			System.out.println("Error in bgmcontroller method.");
		}
	}
	//Function to start song. 
	public void start() {
		try {

			clip.loop(Clip.LOOP_CONTINUOUSLY);
		}
		catch (Exception e) {
			System.err.println(e.getMessage());
			System.out.println("Error in bgmcontroller start method.");
		}
	}
	//Function to play song. 
	public void play(String soundname) {
		try {
			file_chk();
			File file = new File("Bullet Hell/resources/sound/" + soundname);
			AudioInputStream inputStream = AudioSystem.getAudioInputStream(file);
			clip = AudioSystem.getClip();
			clip.open(inputStream);
			start();
		}
		catch (Exception e) {
			System.err.println(e.getMessage());
			System.out.println("Error in bgmcontroller play method.");
		}
	}
	//Function to stop song. 
	public void stop() {
		try {
			clip.setMicrosecondPosition(0);
			clip.stop();
		}
		catch (Exception e) {
			System.err.println(e.getMessage());
			System.out.println("Error in bgm controller stop method.");
		}
	}
	public void pause() {
		try {
			clip.stop();
		}
		catch (Exception e) {
			System.err.println(e.getMessage());
			System.out.println("Error in bgm controller stop method.");
		}
	}
	//Interface function for file validation. 
	public void file_chk() {
		if(file_path.exists()) {
			System.out.println("File path is valid.");
		}
		else {
			System.out.println("File path is not valid.");
		}
	}
	//==== There was an attempt. =====
//	public File file_write(String soundname) {
//		try {
//			  file_path = (Files.write(file_path.toPath(),soundname.getBytes(),StandardOpenOption.APPEND)).toFile();
//			  return file_path;
//		}
//		catch (IOException e) {
//			System.err.println(e.getMessage());
//		}
//		System.out.println(soundname);
//		return file_path;
//	}
}
