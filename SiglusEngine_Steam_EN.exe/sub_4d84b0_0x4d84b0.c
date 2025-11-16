// 函数: sub_4d84b0
// 地址: 0x4d84b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1332b64
int32_t eax_1 = data_1332b60 - 1
int32_t esi_1 = neg.d(data_1332b38)
int32_t eax_2 = data_1332b34
int32_t ebx_2 = edx - data_1321ecc - 1
int32_t SrcWidth
int32_t xSrc
int32_t eax_20
int32_t ySrc

if (eax_2 s< 0)
    if (neg.d(eax_2) s>= 0xff)
        HDC var_28 = arg1
        return sub_4d8230(arg1)
    
    int32_t eax_21
    xSrc = data_1332b30 - divs.dp.d(sx.q(data_1332b30 * 0xff), 0xff - eax_21) - data_1332b3c
    SrcWidth = divs.dp.d(sx.q((eax_1 - data_1332b30) * 0xff), 0xff - eax_21) - xSrc - data_1332b3c
        + data_1332b30 + 1
    ySrc = ebx_2 - divs.dp.d(sx.q(ebx_2 * 0xff), 0xff - eax_21) - esi_1
    eax_20 = divs.dp.d(sx.q((edx - 1 - ebx_2) * 0xff), 0xff - eax_21) - ySrc - esi_1
else
    if (eax_2 s>= 0xff)
        eax_2 = 0xff
    
    xSrc = data_1332b30 - (0xff - eax_2) * data_1332b30 s/ 0xff - data_1332b3c
    SrcWidth =
        data_1332b30 + 1 + (eax_1 - data_1332b30) * (0xff - eax_2) s/ 0xff - xSrc - data_1332b3c
    ySrc = ebx_2 - (0xff - eax_2) * ebx_2 s/ 0xff - esi_1
    eax_20 = (edx - 1 - ebx_2) * (0xff - eax_2) s/ 0xff - ySrc - esi_1

int32_t SrcHeight = eax_20 + 1 + ebx_2

if (SrcWidth s> 0 && SrcHeight s> 0)
    return sub_4d82f0(
        StretchDIBits(arg1, data_1356ec4, data_1356ec8 - data_1c052a0, data_1356ed4, data_1356ec0, 
            xSrc, ySrc, SrcWidth, SrcHeight, data_1332b54, &data_1c052a8, data_1c052a4, SRCCOPY), 
        data_1356ec4, arg1, data_1356ec8, data_1356ecc, data_1356ed0)

int32_t ySrc_1 = ySrc
return sub_4d8230(arg1)
