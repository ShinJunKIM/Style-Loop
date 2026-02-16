#include <iostream>
#include <vector>
#include <string>
#include <cmath>    // 수학 함수 (sqrt, pow)
#include <limits>   // 최대값 정의

// 1. 옷을 나타내는 데이터 구조 (설계도)
struct FashionItem {
    int id;                      // 상품 ID
    std::string name;            // 상품명
    std::vector<float> features; // AI가 뽑아준 특징 (3차원 벡터라고 가정)
};

// 2. 두 옷 사이의 거리를 계산하는 함수 (유클리드 거리)
// 거리가 0에 가까울수록 "비슷하다(어울린다)"는 뜻입니다.
float calculateDistance(const std::vector<float>& a, const std::vector<float>& b) {
    float sum = 0.0f;
    for (size_t i = 0; i < a.size(); ++i) {
        float diff = a[i] - b[i];
        sum += diff * diff; // 차이의 제곱을 더함
    }
    return std::sqrt(sum); // 제곱근을 씌움
}

int main() {
    std::cout << "[Style-Loop] Engine Start...\n" << std::endl;

    // 3. 내 옷장 (입력: 파란색 셔츠라고 가정)
    // 특징 벡터: [0.1, 0.2, 0.9] (마지막 숫자가 높아서 '파란색' 느낌)
    std::vector<float> my_shirt_vec = {0.1f, 0.2f, 0.9f};
    std::cout << "-> My Shirt Vector: [0.1, 0.2, 0.9]\n" << std::endl;

    // 4. 쇼핑몰 데이터베이스 (가짜 데이터 3개)
    std::vector<FashionItem> shop_db = {
        {101, "Black Slacks", {0.1f, 0.2f, 0.8f}}, // 셔츠랑 아주 비슷함 (거리가 가까움)
        {102, "Red Pants",    {0.9f, 0.1f, 0.1f}}, // 완전 다름 (빨간색)
        {103, "Green Chino",  {0.2f, 0.8f, 0.2f}}  // 조금 다름 (초록색)
    };

    // 5. 검색 시작 (가장 가까운 옷 찾기)
    int best_match_id = -1;
    float min_distance = std::numeric_limits<float>::max(); // 아주 큰 값으로 초기화

    std::cout << "--- Searching Best Match ---" << std::endl;

    for (const auto& item : shop_db) {
        float dist = calculateDistance(my_shirt_vec, item.features);
        std::cout << "Item [" << item.name << "] Distance: " << dist << std::endl;

        if (dist < min_distance) {
            min_distance = dist;
            best_match_id = item.id;
        }
    }

    // 6. 결과 추천
    std::cout << "\n----------------------------" << std::endl;
    std::cout << "[Result] Best Match ID: " << best_match_id << std::endl;
    std::cout << "Recommended Item: ";
    
    // ID로 이름 찾기 (단순 출력용)
    for(const auto& item : shop_db) {
        if(item.id == best_match_id) std::cout << item.name << std::endl;
    }
    
    return 0;
}