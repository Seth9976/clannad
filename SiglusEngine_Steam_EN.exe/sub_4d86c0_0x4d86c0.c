// 函数: sub_4d86c0
// 地址: 0x4d86c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t DestWidth = data_1356ed4
int32_t SrcWidth = data_1332b60
int32_t DestHeight = data_1356ec0
int32_t temp0 = divs.dp.d(sx.q(DestWidth * data_1332b3c), SrcWidth)
int32_t SrcHeight = data_1332b64
int32_t temp0_1 = divs.dp.d(sx.q(DestHeight * data_1332b38), SrcHeight)
StretchDIBits(arg1, data_1356ec4 + temp0, data_1356ec8 - data_1c052a0 + temp0_1, DestWidth, 
    DestHeight, 0, 0, SrcWidth, SrcHeight, data_1332b54, &data_1c052a8, data_1c052a4, SRCCOPY)
int32_t edx_3 = data_1356ec4
int32_t eax_13 = data_1356ec8
int32_t edi = data_1356ecc
int32_t ecx = data_1356ed0

if (temp0 s< 0)
    edi += temp0
else if (temp0 s> 0)
    edx_3 += temp0

if (temp0_1 s< 0)
    ecx += temp0_1
else if (temp0_1 s> 0)
    eax_13 += temp0_1

return sub_4d82f0(eax_13, edx_3, arg1, eax_13, edi, ecx)
