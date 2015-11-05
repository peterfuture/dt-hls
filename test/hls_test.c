/*
 * =====================================================================================
 *
 *    Filename   :  hls_test.c
 *    Description:
 *    Version    :  1.0
 *    Created    :  2015��10��27�� 20ʱ42��00��
 *    Revision   :  none
 *    Compiler   :  gcc
 *    Author     :  peter-s
 *    Email      :  peter_future@outlook.com
 *    Company    :  dt
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dthls_api.h"

int main(int argc, char **argv)
{
    printf("===========================================\n");
    printf("Enter HLS Unit Test\n");
    const char *uri = "http://devimages.apple.com/iphone/samples/bipbop/gear1/prog_index.m3u8";
    void *hls_ctx;
    dthls_init(&hls_ctx, uri);
    dthls_stop(hls_ctx);
    printf("Exit HLS Unit Test\n");
    printf("===========================================\n");
}
