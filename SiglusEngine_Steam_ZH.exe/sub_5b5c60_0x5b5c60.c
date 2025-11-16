// 函数: sub_5b5c60
// 地址: 0x5b5c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s>= arg3)
    return 

int32_t eax = arg2 * 0x30c
arg3 -= arg2
int32_t var_c_1 = eax
void* ebx_1 = arg1
int32_t i

do
    void* esi_2 = *(ebx_1 + 0xa4) + eax
    
    if (*(esi_2 + 0x20c) == 0)
        (*(*(esi_2 + 0x158) + 4))(0, *(esi_2 + 0x208))
    else
        int32_t eax_1 = *(esi_2 + 0x208)
        int32_t ebx_4 = (*(esi_2 + 0x200) - *(esi_2 + 0x1fc)) s>> 2
        sub_55c6f0(esi_2 + 0x1fc, eax_1)
        int32_t eax_2 = *(esi_2 + 0x158)
        
        if (eax_1 s<= ebx_4)
            (*(eax_2 + 4))(0, eax_1)
            ebx_1 = arg1
        else
            (*(eax_2 + 4))(0, ebx_4)
            (**(esi_2 + 0x158))(ebx_4, eax_1)
            ebx_1 = arg1
    
    sub_55b650(esi_2 + 0x210)
    sub_5b6500(esi_2 + 0xa0)
    eax = var_c_1 + 0x30c
    *(esi_2 + 0x2c8) = 0
    i = arg3
    arg3 -= 1
    *(esi_2 + 0x2cc) = 0
    *(esi_2 + 0x2d0) = 0
    *(esi_2 + 0x2d4) = 0
    var_c_1 = eax
while (i != 1)
