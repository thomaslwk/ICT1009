/* ---------------------------------------------
 * Type: Class
 * Description: Timerbound game difficulty logic
 * --------------------------------------------*/

public class difficulty {
    // Create difficulty variable
    public int difficulty;

    // Default difficulty will be set to 1.
    public difficulty() {
        difficulty = 1;
    }

    // Getter and setter method for difficulty.
    public int getdifficulty() {
        return this.difficulty;
    }
    public void setdifficulty(int lvl) {
        this.difficulty = lvl;
    }
}
