// 函数: sub_4d8790
// 地址: 0x4d8790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HDC var_8 = arg1
uint32_t eax = data_1332b64
SetDIBitsToDevice(arg1, data_1332b3c + data_1356ec4, data_1332b38 + data_1356ec8, data_1332b60, 
    eax, 0, 0, data_1c052a0, eax, data_1332b54, &data_1c052a8, data_1c052a4)
int32_t ecx = data_1332b3c
int32_t eax_5 = data_1332b38
int32_t edi = data_1356ec4
int32_t edx_1 = data_1356ec8
int32_t ebx = data_1356ecc
int32_t esi = data_1356ed0

if (ecx s< 0)
    ebx += ecx
else if (ecx s> 0)
    edi += ecx

if (eax_5 s< 0)
    esi += eax_5
else if (eax_5 s> 0)
    edx_1 += eax_5

return sub_4d82f0(eax_5, edi, arg1, edx_1, ebx, esi)
