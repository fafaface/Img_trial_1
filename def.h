/**
 * @file def.h
 *
 * Copyright (c) 2020 Taku Kutsuzawa
 *
 *
 * @brief プロジェクトに依存せず使える定義
 * @author Taku Kutsuzawa
 * @date 2020/01/02
 */

#ifndef DEF_H_
#define DEF_H_

#ifdef _DEBUG_
#define ERR(fmt, ...) fprintf(stderr, "\033[31m[%-15.15s:%4u] " fmt "\033[0m\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define DBG(fmt, ...) fprintf(stderr, "\033[33m[%-15.15s:%4u] " fmt "\033[0m\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define LOG(fmt, ...) fprintf(stderr, "[%-15.15s:%4u] " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define PRT(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)
#else
#define ERR(fmt, ...)
#define DBG(fmt, ...)
#define LOG(fmt, ...)
#define PRT(fmt, ...)
#endif

#define TRUE  1
#define FALSE 0

/**
 * @brief 成功失敗を表現する
 */
typedef enum result_t {
  SUCCESS = 0, /**< 成功 */
  FAILURE = -1, /**< 失敗 */
} result_t;

#endif /* DEF_H_ */
