// 函数: sub_40ebc0
// 地址: 0x40ebc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = *(arg2 + 0x504)

if (arg3 == 0 || arg4 == 0)
    return nullptr

void* result = sub_4038a0(arg1, i_1 << 2)

if (i_1 s<= 0)
    return result

int32_t* esi_1 = arg3 - arg4
int32_t* ecx_3 = arg4
void* edi_2 = result - arg4
int32_t i

do
    int32_t edx_6 = ((*(esi_1 + ecx_3) & 0x7fff) * (0x10000 - arg5) + (*ecx_3 & 0x7fff) * arg5
        + 0x8000) s>> 0x10
    *(edi_2 + ecx_3) = edx_6
    
    if (((*(esi_1 + ecx_3)).w:1.b & 0x80) != 0 && ((*ecx_3).w:1.b & 0x80) != 0)
        edx_6:1.b |= 0x80
        *(edi_2 + ecx_3) = edx_6
    
    ecx_3 = &ecx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
