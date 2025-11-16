// 函数: sub_586eb0
// 地址: 0x586eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = arg4

if (result == 1)
    int32_t var_20
    int16_t* ecx = sub_6c4e40(arg3, &var_20, arg2, result)
    int32_t esi_1 = *(ecx + 0x14)
    int16_t* edx
    
    if (esi_1 u< 8)
        edx = ecx
    else
        edx = *ecx
    
    void* eax_4 = &edx[*(ecx + 0x10)]
    
    if (esi_1 u>= 8)
        ecx = *ecx
    
    int16_t* var_28 = ecx
    int32_t* esi_2 = nullptr
    int32_t* var_24
    
    if (sub_6af490(eax_4, &var_24, &var_28, eax_4) != 0)
        esi_2 = var_24
    
    int32_t var_c
    
    if (var_c u>= 8)
        j__free(var_20)
    
    result = arg5 - 1
    
    if (result u<= 0x1f)
        result = zx.d(lookup_table_586fa8[result])
        
        switch (result)
            case 0
                result = sub_6c52d0(arg3, arg2, 1, 0, 1, esi_2)
            case 1
                result = sub_6c52d0(arg3, arg2, 1, 0, 3, esi_2)
            case 2
                result = sub_6c52d0(arg3, arg2, 1, 0, 0xf, esi_2)
            case 3
                result = sub_6c52d0(arg3, arg2, 1, 0, 0xff, esi_2)
            case 4
                result = sub_6c52d0(arg3, arg2, 1, 0, 0xffff, esi_2)
            case 5
                result = sub_6c52d0(arg3, arg2, 1, 0x80000000, 0x7fffffff, esi_2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
