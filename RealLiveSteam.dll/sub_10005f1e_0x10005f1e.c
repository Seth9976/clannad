// 函数: sub_10005f1e
// 地址: 0x10005f1e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 0x24
int32_t var_8 = 0x10015fa8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int32_t edi
int32_t var_44 = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10015fa8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_48 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_48
void* const var_4c_5 = &data_10005f2a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp = &var_48
int32_t var_30 = 0
int32_t var_34 = 0
int32_t ebx_1 = 0
int32_t var_24 = 0
uint32_t* edi_1 = nullptr
int32_t var_2c = 0
int32_t result
void* var_20_1
int32_t eax_6
int32_t eax_9

if (arg1 s<= 0xb)
    if (arg1 != 0xb)
        int32_t var_4c = 2
        esp = &var_48
        
        if (arg1 == 2)
            var_20_1 = &data_1001b2a8
            eax_6 = data_1001b2a8
            goto label_10005fdf
        
        if (arg1 == 4)
            goto label_10005f60
        
        if (arg1 == 6)
            goto label_10005fb5
        
        if (arg1 != 8)
            goto label_10005fa8
        
        goto label_10005f60
    
label_10005f60:
    edi_1 = sub_10005209()
    uint32_t* var_2c_1 = edi_1
    
    if (edi_1 != 0)
        esp = &var_48
        void* eax_8 = sub_100060d9(arg1, edi_1[0x17]) + 8
        var_20_1 = eax_8
        eax_9 = *eax_8
        goto label_10005ff0
    
    result = 0xffffffff
else if (arg1 == 0xf)
    var_20_1 = &data_1001b2b4
    eax_6 = data_1001b2b4
label_10005fdf:
    ebx_1 = 1
    int32_t var_24_1 = 1
    eax_9 = DecodePointer(eax_6)
    esp = &var_48
label_10005ff0:
    
    if (eax_9 != 1)
        if (eax_9 == 0)
            __exit(3)
            noreturn
        
        if (ebx_1 != 0)
            __lock(0)
        
        int32_t var_8_1 = 0
        
        if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
            goto label_1000603c
        
        var_30 = edi_1[0x18]
        edi_1[0x18] = 0
        
        if (arg1 != 8)
            *var_20_1 = EncodePointer(nullptr)
        else
            var_34 = edi_1[0x19]
            edi_1[0x19] = 0x8c
        label_1000603c:
            
            if (arg1 != 8)
                *var_20_1 = EncodePointer(nullptr)
            else
                int32_t i = 3
                int32_t var_38_1 = 3
                
                while (i s< 0xc)
                    *(edi_1[0x17] + i * 0xc + 8) = 0
                    i += 1
                    int32_t i_1 = i
        
        int32_t var_8_2 = 0xfffffffe
        $LN37()
        
        if (arg1 != 8)
            eax_9(arg1)
        else
            int32_t var_4c_3 = edi_1[0x19]
            eax_9(arg1)
        
        esp = &var_44
        
        if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
            edi_1[0x18] = var_30
            
            if (arg1 == 8)
                edi_1[0x19] = var_34
    
    result = 0
else
    if (arg1 == 0x15)
        var_20_1 = &data_1001b2ac
        eax_6 = data_1001b2ac
        goto label_10005fdf
    
    if (arg1 == 0x16)
    label_10005fb5:
        var_20_1 = &data_1001b2b0
        eax_6 = data_1001b2b0
        goto label_10005fdf
    
label_10005fa8:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
*(esp - 4) = &data_100060d8
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_2 = *(esp - 4)
return result
