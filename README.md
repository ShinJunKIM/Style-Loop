# Style-Loop 👕👖
> **AI-powered Personal Styling Agent with High-Performance C++ Vector Search Engine**

**Style-Loop** is an end-to-end fashion recommendation service that utilizes Computer Vision (CLIP) and a custom-built C++ search engine to provide real-time outfit suggestions based on visual compatibility.

## 🚀 Project Goal
To build a full-cycle product engineering experience, from designing a **High-Performance Vector Search Engine** in C++ to deploying a scalable AI service on AWS.

## 🛠 Tech Stack
* **Core Engine:** C++17 (Custom Vector Search with KNN Algorithm)
* **AI Model:** Python, PyTorch, OpenAI CLIP (Feature Extraction)
* **Backend:** FastAPI (Gateway Server)
* **Frontend:** React / Flutter (User Interface)
* **DevOps:** Docker, AWS EC2, GitHub Actions

## 🏗 Architecture Overview
1.  **Client:** User uploads an image of a clothing item.
2.  **AI Server (Python):** Converts the image into a 512-dimensional vector embedding.
3.  **Search Engine (C++):** Calculates Euclidean distance to find the "Best Match" item from the vector database in < 100ms.
4.  **Result:** Returns the matched item with purchase links.

## 📝 Documentation
* [Design Doc & Roadmap](./docs/01-Project-Overview.md)
* [API Specification](./docs/03-API-Spec.md) (Coming Soon)

---
*Created by ShinJun Kim (2026)*
