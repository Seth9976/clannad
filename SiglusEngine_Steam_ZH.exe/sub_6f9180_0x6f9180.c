// 函数: sub_6f9180
// 地址: 0x6f9180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x98)
int32_t var_8_1
int32_t var_8_3
int32_t* eax_7

if (result == 0)
label_6f9298:
    
    if (data_4ebe700 == 6)
        goto label_6f92bd
    
    var_8_1 = 6
    data_4ebe700 = 6
label_6f92ad:
    int32_t* eax_5 = data_4ebe4b0
    (*(*eax_5 + 0xe4))(eax_5, 0x14, var_8_1)
label_6f92bd:
    
    if (data_4ebe6fc == 5)
        goto label_6f92e2
    
    var_8_3 = 5
    data_4ebe6fc = 5
label_6f92d2:
    int32_t* eax_6 = data_4ebe4b0
    (*(*eax_6 + 0xe4))(eax_6, 0x13, var_8_3)
label_6f92e2:
    
    if (data_4ebe95c != 1)
        data_4ebe95c = 1
        eax_7 = data_4ebe4b0
        (*(*eax_7 + 0xe4))(eax_7, 0xab, 1)
else
    if (result == 1)
        if (data_4ebe700 == 2)
            goto label_6f92bd
        
        data_4ebe700 = 2
        var_8_1 = 2
        goto label_6f92ad
    
    if (result != 2)
        if (result == 3)
            if (data_4ebe700 != result)
                data_4ebe700 = result
                int32_t* eax_3 = data_4ebe4b0
                (*(*eax_3 + 0xe4))(eax_3, 0x14, 3)
            
            if (data_4ebe6fc == 1)
                goto label_6f92e2
            
            data_4ebe6fc = 1
            var_8_3 = 1
            goto label_6f92d2
        
        if (result != 4)
            goto label_6f9298
        
        if (data_4ebe700 != result)
            data_4ebe700 = result
            int32_t* eax_4 = data_4ebe4b0
            (*(*eax_4 + 0xe4))(eax_4, 0x14, 4)
        
        if (data_4ebe6fc == 2)
            goto label_6f92e2
        
        data_4ebe6fc = 2
        var_8_3 = 2
        goto label_6f92d2
    
    if (data_4ebe700 != result)
        data_4ebe700 = result
        int32_t* eax_1 = data_4ebe4b0
        (*(*eax_1 + 0xe4))(eax_1, 0x14, 2)
    
    if (data_4ebe6fc != 5)
        int32_t* eax_2 = data_4ebe4b0
        data_4ebe6fc = 5
        (*(*eax_2 + 0xe4))(eax_2, 0x13, 5)
    
    if (data_4ebe95c != 3)
        data_4ebe95c = 3
        eax_7 = data_4ebe4b0
        (*(*eax_7 + 0xe4))(eax_7, 0xab, 3)
result.b = 1
return result
