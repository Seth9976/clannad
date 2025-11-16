// 函数: sub_445680
// 地址: 0x445680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (data_1393180 == 0)
    return 

int32_t esi_1 = 0
int32_t edi_1 = *(data_1393188 + 0x10)
data_1393190 = 0

if (edi_1 s<= 0)
    return 

int32_t* ebx_1 = data_139318c
int32_t* eax_1 = ebx_1

while (*eax_1 != arg1)
    esi_1 += 1
    eax_1 = &eax_1[3]
    
    if (esi_1 s>= edi_1)
        return 

data_1393198 = divu.dp.d(0:0x1f4000, arg2)
data_1393190 = &ebx_1[esi_1 * 3]
data_1393194 = data_1392ccc
