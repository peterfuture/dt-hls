/*
 * =====================================================================================
 *
 *    Filename   :  dthls_api.c
 *    Description:  hls process flow
 *    Version    :  1.0
 *    Created    :  2015��10��21�� 11ʱ13��18��
 *    Revision   :  none
 *    Compiler   :  gcc
 *    Author     :  peter-s
 *    Email      :  peter_future@outlook.com
 *    Company    :  dt
 *
 * =====================================================================================
 */

#include "dthls_priv.h"

#define TAG "HLS-API"

int dthls_init(void **priv, const char *uri)
{
    int ret = DTHLS_ERROR_NONE;
    if (!uri || strlen(uri) < 2) {
        dt_info(TAG, "invalid url, quit \n");
        return -1;
    }
    dthls_session_t *session = (dthls_session_t*)malloc(sizeof(dthls_session_t));
    ret = dthls_session_open(session, uri);
    if (ret < 0) {
        return ret;
    }
    *priv = session;
    return 0;
}

int dthls_stop(void *priv)
{
    dthls_session_t *session = (dthls_session_t *)priv;
    return dthls_session_close(session);
}
