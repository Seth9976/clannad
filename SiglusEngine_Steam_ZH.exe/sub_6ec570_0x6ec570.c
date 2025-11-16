// 函数: sub_6ec570
// 地址: 0x6ec570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
int32_t* var_c = eax
int32_t i = 0
int32_t result

while (true)
    void var_20c
    int32_t result_1 = sub_6ec110(eax, &var_20c)
    result = result_1
    
    if (result s< 0)
        break
    
    int32_t eax_1 = sub_6ec390(result_1, &var_20c, 0, result)
    
    if (eax_1 u> 0x7fff)
        result = 0xffffffe9
        break
    
    int32_t eax_3 = _malloc(eax_1 * 2)
    
    if (eax_3 == 0)
        result = 0xffffffff
        break
    
    sub_6ec390(eax_3, &var_20c, eax_3, result)
    *(arg2 + (i << 2)) = eax_3
    i += 1
    eax = var_c
    
    if (i s>= 0x50)
        return 0

while (i s> 0)
    int32_t var_21c_4 = *(arg2 + (i << 2) - 4)
    i -= 1
    _free(var_21c_4)

return result
