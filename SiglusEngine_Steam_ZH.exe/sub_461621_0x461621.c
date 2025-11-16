// 函数: sub_461621
// 地址: 0x461621
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void* var_24 = nullptr
int32_t* var_1c = arg1
char* var_20
int32_t result

if (sub_4606c9(arg2, arg3, &var_20) == 0)
    result = 0x8876038f
else
    if (*var_20 == 0)
        var_20 = nullptr
    
    int32_t edi
    int32_t var_38_1 = edi
    int32_t var_18 = 0
    void var_14
    void* edi_1 = &var_14
    int128_t* const esi_1 = &data_aac190:4
    *edi_1 = *esi_1
    void* edi_2 = edi_1 + 4
    void* esi_2 = esi_1 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)
    
    if (arg5 == 0)
    label_46168e:
        
        if (var_20 == 0)
        label_4616b2:
            
            if (sub_4607b2(var_1c, &var_18, &var_24) != 0)
                goto label_4616be
            
            result = 0x8876038f
        else
            if (sub_46077d(var_1c, var_20, &var_24) == 0)
                goto label_4616b2
            
        label_4616be:
            int32_t* eax_6 = sub_482331(var_24)
            var_1c = eax_6
            
            if (eax_6 == 0)
                result = 0x8007000e
            else if (sub_48647e(arg4, &var_1c) != 0)
                result = 0
            else
                sub_460754(var_1c, 1)
                result = 0x8007000e
    else
        if (sub_4607e7(arg2, arg3, &var_18) != 0)
            goto label_46168e
        
        result = 0x8876038f

sub_745f2b(__security_cookie_1)
return result
