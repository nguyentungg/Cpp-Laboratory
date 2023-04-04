#include <iostream>

using namespace std;
class Object {
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction() {
		cout << "ACtorFunction() called.\n\n";
	}
};
class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction() {
		cout << "PawnFunction() called.\n\n";
	}
};
int main() {


	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	for (int i = 0; i < 3; i++) {
		ObjectArray[i]->BeginPlay();

		Object* obj = ObjectArray[i];

		Actor* act = dynamic_cast<Actor*>(obj);
		//Actor* act = static_cast<Actor*>(obj);

		if (act) {
			act->ActorFunction();
		}

		Pawn* pwn = dynamic_cast<Pawn*>(obj);
		//Pawn* pwn = static_cast<Pawn*>(obj);
		if (pwn) {
			pwn->ActorFunction();
		}
	}




	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;

	system("pause");
}

void Object::BeginPlay() {
	cout << "Object BeginPlay() called. \n";
}

void Actor::BeginPlay() {
	cout << "Actor BeginPlay() called. \n";
}

void Pawn::BeginPlay() {
	cout << "Pawn BeginPlay() called. \n";
}