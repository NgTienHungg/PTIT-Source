/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

class Team {

    public static int NUM = 1;
    public String teamID, teamName, schoolName;

    public Team(String teamName, String schoolName) {
        this.teamID = String.format("Team%02d", NUM++);
        this.teamName = teamName;
        this.schoolName = schoolName;
    }
}

class Candidate {

    public static int NUM = 1;
    public String ID, name, teamID;
    public Team team;

    public Candidate(String name, String teamID) {
        this.ID = String.format("C%03d", NUM++);
        this.name = name;
        this.teamID = teamID;
    }

    @Override
    public String toString() {
        return ID + " " + name + " " + team.teamName + " " + team.schoolName;
    }
}

public class TH_DanhSachICPC {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Team> teams = new ArrayList<>();
        ArrayList<Candidate> candidates = new ArrayList<>();

        int numTeam = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < numTeam; i++) {
            String teamName = sc.nextLine();
            String schoolName = sc.nextLine();
            Team team = new Team(teamName, schoolName);
            teams.add(team);
        }

        int numCandidate = Integer.parseInt(sc.nextLine());
        for (int i = 0; i < numCandidate; i++) {
            String name = sc.nextLine();
            String teamID = sc.nextLine();
            Candidate candidate = new Candidate(name, teamID);
            for (Team team : teams) {
                if (team.teamID.equals(teamID)) {
                    candidate.team = team;
                    break;
                }
            }
            candidates.add(candidate);
        }

        candidates.sort(new Comparator<Candidate>() {
            @Override
            public int compare(Candidate o1, Candidate o2) {
                return o1.name.compareTo(o2.name);
            }
        });

        for (Candidate candidate : candidates) {
            System.out.println(candidate);
        }
    }
}

//2
//BAV_MIS
//Banking Academy of Vietnam
//FTU Knights1
//Foreign Trade University
//6
//Le Trung Toan
//Team01
//Nguyen Trinh Quoc Long
//Team01
//Giang Minh Tung
//Team01
//Nguyen Hang Giang
//Team02
//Nguyen Thanh Nhan
//Team02
//Nguyen Viet Duc
//Team02
