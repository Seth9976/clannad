// 函数: sub_57df40
// 地址: 0x57df40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 u> 0x3f)
    return 

int32_t eax = data_7037c0
data_108f2d0 = arg2

if (arg2 == 0)
    eax = data_7037bc

if (eax u> 0x1f)
    return 

data_107eecc += 1
data_107ee54 = arg1
int32_t edi_1 = eax * 5
data_107eea4 = 1
data_107ee58 = 0
int32_t eax_1 = *(arg1 * 0x1d4 + 0x1090b1c)
int32_t edx_2
int32_t esi_1

if (eax_1 == 0)
    esi_1 = *(arg1 * 0x3920 + 0xf8d2e4)
    edx_2 = *(arg1 * 0x3920 + 0xf8d2e8)
else if (eax_1 != 2)
    esi_1 = *(arg1 * 0x2d0 + 0x8fcb0c)
    edx_2 = *(arg1 * 0x2d0 + 0x8fcb10)
else
    esi_1 = *(arg1 * 0x1d4 + 0x1090b20)
    edx_2 = *(arg1 * 0x1d4 + 0x1090b24)

if (eax_1 != 2)
    int32_t ecx_3 = *(arg1 * 0x1d4 + 0x1090ae8)
    
    if (ecx_3 s< *((edi_1 << 3) + &data_131925c))
        data_107ef98 = esi_1
    else
        data_107ef98 = ((ecx_3 - *((edi_1 << 3) + &data_131925c)) s>> 1) + esi_1
    
    int32_t esi_2 = *((edi_1 << 3) + &data_1319260)
    
    if (ecx_3 s< esi_2)
        data_107ef9c = edx_2
    else if (eax_1 != 0)
        data_107ef9c = *(arg1 * 0x2d0 + &data_8fcadc) - esi_2 + edx_2
    else
        data_107ef9c = ecx_3 - esi_2 + edx_2
else
    data_107ef98 = esi_1
    data_107ef9c = edx_2

int32_t ecx_2 = *((edi_1 << 3) + &data_1319264)
int32_t edx_4 = *((edi_1 << 3) + &data_1319258) - 1
data_107ef88 = data_131310c
data_107ef7c = 0
data_107ef70 = edx_4
data_107ef74 = 0
data_107ef94 = 0

if (ecx_2 s< 0)
    ecx_2 = neg.d(ecx_2)

data_107ef90 = ecx_2
data_107ef8c = 0
data_107ef80 = edx_4
data_107ef78 = edx_4 != 0
data_107ef84 = 0
