// 函数: sub_407562
// 地址: 0x407562
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const var_8 = arg1
int32_t edi
int32_t var_14 = edi
void*** esi = nullptr
var_8 = nullptr

if (arg7 != 0)
    *arg7 = 0

if (arg8 != 0)
    *arg8 = 0

int32_t result

if (arg2 == 0 || arg7 == 0)
    result = 0x8876086c
label_40763c:
    
    if (esi != 0)
        sub_42d09d(&esi[4])
        
        if (arg8 != 0)
            sub_42a5fc(&esi[0xa], arg8)
else
    void*** eax_1 = sub_745f3f(0x360)
    
    if (eax_1 == 0)
        esi = nullptr
    else
        esi = sub_435d24(eax_1)
    
    if (esi != 0)
        result = sub_42ee4c(&esi[4], arg2, arg3, arg4, arg5)
        
        if (result s>= 0)
            result = sub_44258b(&esi[0xb0], &esi[4], arg6, &var_8)
            
            if (result s>= 0)
                if (sub_699170(&esi[0xa]) == 0)
                    result = sub_436ab7(esi, var_8)
                    
                    if (result s>= 0)
                        var_8 = nullptr
                        
                        if (sub_699170(&esi[0xa]) != 0)
                            result = 0x88760b59
                        else
                            *arg7 = esi
                            (*esi)[1](esi)
                else
                    result = 0x88760b59
        
        goto label_40763c
    
    result = 0x8007000e

if (var_8 != 0)
    var_8 = nullptr

if (esi != 0)
    (*esi)[2](esi)

return result
