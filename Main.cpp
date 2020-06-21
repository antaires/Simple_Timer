#include <iostream>
#include <chrono>

struct Timer
{
  // depending on compiler: std::chrono::high_resolution_clock::time_point
  std::chrono::time_point<std::chrono::steady_clock> start, end;
  std::chrono::duration<float> duration;

  Timer()
  {
    start = std::chrono::high_resolution_clock::now();
  }

  ~Timer()
  {
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;

    float ms = duration.count() * 1000.0f;
    std::cout<< "\nTimer took: " << ms << " ms";
  }
};

void Function()
{
  Timer timer;

  // to stuff to time it here
}

int main()
{

  Function();

  return 0;
}
