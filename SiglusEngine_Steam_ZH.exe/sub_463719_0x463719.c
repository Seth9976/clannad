// 函数: sub_463719
// 地址: 0x463719
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = sub_745f3f(0x54)
void*** esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_4626ed(eax, arg3, arg1, arg2)

if (esi == 0)
    return 0x8007000e

int32_t edi
int32_t var_c_2 = edi
int32_t* result_1 = sub_46275d(esi)
int32_t* result

if (result_1 s>= 0)
    result_1 = sub_4636e2(esi)
    
    if (result_1 s< 0)
        (*esi)[2](esi)
        result = result_1
    else
        result_1 = sub_46339e(esi)
        
        if (result_1 s< 0)
            (*esi)[2](esi)
            result = result_1
        else
            *arg4 = esi
            result = nullptr
else
    (*esi)[2](esi)
    result = result_1

return result
