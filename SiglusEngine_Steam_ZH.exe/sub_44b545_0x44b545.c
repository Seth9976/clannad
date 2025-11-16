// 函数: sub_44b545
// 地址: 0x44b545
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = (*(arg1 + 0x119) & 2) != 0
int32_t* eax_2 = zx.d(*(arg1 + 0x42)) * 0xb4 + *(arg1 + 0xa4) + 0x90
int32_t edi
int32_t var_24 = edi
int32_t* var_18 = nullptr
int32_t* var_14 = nullptr
int32_t result

if (cond:0)
label_44b5de:
    int32_t* eax_8 = var_18
    result = (*(*eax_8 + 0x10))(eax_8)
    
    if (result s>= 0)
        int32_t* eax_10 = *eax_2
        
        if (eax_10 == 0)
            result = 0
        else
            result = (*(*eax_10 + 0x14))(eax_10)
        
        if (result s>= 0)
            result = (*(*var_14 + 0x10))(var_14)
            
            if (result s>= 0)
                int32_t* eax_15 = var_18
                result = (*(*eax_15 + 0x14))(eax_15)
                
                if (result s>= 0)
                    int32_t* eax_17 = *eax_2
                    
                    if (eax_17 != 0)
                        (*(*eax_17 + 8))(eax_17)
                        *eax_2 = 0
                    
                    *eax_2 = var_14
                    var_14 = nullptr
else
    int32_t var_8_1 = 0
    int32_t* var_c_1 = &var_18
    
    while (true)
        int32_t* eax_3 = *(arg1 + 0xc)
        result = (*(*eax_3 + 0xf0))(eax_3)
        
        if (result s< 0)
            break
        
        sub_416380(1)
        int32_t var_28_2 = arg3
        result = sub_4480a6(arg1, arg2)
        sub_416380(0)
        
        if (result s< 0)
            int32_t* esi_2 = *(arg1 + 0xc)
            int32_t __saved_ebp
            (*(*esi_2 + 0xf4))(esi_2, &(&__saved_ebp)[var_8_1 - 5])
            break
        
        int32_t* eax_6 = *(arg1 + 0xc)
        result = (*(*eax_6 + 0xf4))(eax_6, var_c_1)
        
        if (result s< 0)
            break
        
        var_8_1 += 1
        var_c_1 = &var_c_1[1]
        
        if (var_8_1 u>= 2)
            goto label_44b5de

int32_t* eax_19 = var_18

if (eax_19 != 0)
    (*(*eax_19 + 8))(eax_19)
    var_18 = nullptr

if (var_14 != 0)
    (*(*var_14 + 8))(var_14)

return result
