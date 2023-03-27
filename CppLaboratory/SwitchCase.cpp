#include <iostream>
using namespace std;
enum PlayerStatus {
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

class SwitchCaseInGame {

public:
	void SwitchCaseMain() {
		float MovementSpeed;
		PlayerStatus status = PS_Crouching;
		UpdateMovementSpeed(status, MovementSpeed);
		cout << "MovementSpeed = " << MovementSpeed << endl;
	}

private:
	void UpdateMovementSpeed(PlayerStatus P_Status, float& speed) {
		switch (P_Status) {
		case PS_Running:
			speed = RunSpeed;
			break;
		case PS_Walking:
			speed = WalkSpeed;
			break;
		case PS_Crouching:
			speed = CrouchSpeed;
			break;
		}
	}
};