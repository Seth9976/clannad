// 函数: sub_46a010
// 地址: 0x46a010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t edi = arg3

if (edi s> ebx)
    arg1 = edi
    edi = ebx
    ebx = arg1

if (edi s< 0)
    return 

int32_t edx = data_7031bc

if (ebx s>= edx)
    return 

int32_t i_1 = ebx - edi + 1

if (i_1 s<= 0)
    return 

arg1 = arg4 + (edi << 1)
int32_t* ecx_1 = arg1 * 0x7a0 + 0x98bf08
int32_t* var_8_1 = ecx_1
int32_t* esi_2 = arg1 * 0x650 + 0x72d8d8
int32_t i

do
    if (edi s>= 0 && edi s< edx && esi_2[-0x87] == 1)
        arg1 = *ecx_1
        
        if (arg1 != 0xffffffff)
            sub_4629e0(arg1, 3, &esi_2[8], 0)
            esi_2[-1] = 0
            *esi_2 = 0
            esi_2[1].b = 0xff
            esi_2[2] = 0
            esi_2[0x19] = arg5
            esi_2[0x1a] = arg6
            sub_428c70(arg1, esi_2[-0x69], &esi_2[8], &esi_2[-0x37])
            ecx_1 = var_8_1
            edx = data_7031bc
    
    ecx_1 = &ecx_1[0x3d0]
    edi += 1
    esi_2 = &esi_2[0x328]
    var_8_1 = ecx_1
    i = i_1
    i_1 -= 1
while (i != 1)
