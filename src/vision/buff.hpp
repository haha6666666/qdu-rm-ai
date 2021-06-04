#include <vector>

#include "armor.hpp"
#include "common.hpp"


class Buff {
 private:
  cv::Point2f center_;
  std::vector<Armor> armors_;
  Armor target_, predict_;
  game::Team team_;
  double time_ = 0;
  common::Direction direction_ = common::Direction::kUNKNOWN;

 public:
  Buff();
  Buff(game::Team team);
  ~Buff();

  std::vector<Armor> GetArmors();
  void SetArmors(std::vector<Armor> armors);

  cv::Point2f GetCenter();
  void SetCenter(cv::Point2f center);

  common::Direction GetDirection();
  void SetDirection(common::Direction direction);

  double GetTime();
  void SetTime(double time);

  Armor GetTarget();
  void SetTarget(Armor target);

  Armor GetPredict();
  void SetPridict(Armor target);

  game::Team GetTeam();
  void SetTeam(game::Team team);
};