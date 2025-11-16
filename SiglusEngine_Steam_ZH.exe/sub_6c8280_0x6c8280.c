// 函数: sub_6c8280
// 地址: 0x6c8280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6c8100(arg1)
int32_t* var_70 = nullptr
int64_t var_68 = 0
int32_t var_8_1 = 0
int32_t var_24 = 7
int32_t var_28 = 0
int16_t var_38 = 0
sub_52e720(&var_38, &data_af335c, 2)
var_8_1.b = 1
var_8_1.b = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = sub_6b7a80(&var_70, arg2, &var_38).b == 0
char var_39 = eax_3.b

if (var_24 u>= 8)
    j__free(var_38.d)
    eax_3.b = var_39

int32_t var_24_1 = 7
int32_t var_28_1 = 0
var_38 = 0
int32_t* ebx

if (eax_3.b != 0)
    ebx.b = 0
else
    char var_20
    uint32_t eax_4 = sub_6b74a0(eax_3, 8, &var_20, var_70)
    
    if (eax_4 != 8)
        ebx.b = 0
    else if (sub_6ca920(eax_4, nullptr, &var_20, eax_4) != 0)
        ebx.b = 0
    else
        int32_t edi_1 = sub_6cf700()
        int32_t var_48 = edi_1
        
        if (edi_1 == 0)
            ebx.b = 0
        else
            char* eax_7 = sub_6caef0(edi_1)
            char* var_60 = eax_7
            
            if (eax_7 == 0)
                ebx.b = 0
            else
                *(edi_1 + 0x60) = var_70
                *(edi_1 + 0x155) = 8
                sub_6cf770(edi_1, eax_7)
                int32_t var_50
                int32_t var_4c
                uint32_t var_44
                uint32_t var_40
                sub_6d02b0(&var_4c, eax_7, edi_1, &var_4c, &var_50, &var_44, &var_40)
                uint32_t eax_9 = var_40
                
                if (eax_9 == 3)
                    sub_6d0360(edi_1)
                else if (eax_9 == 0 && var_44 s< 8)
                    sub_6d0360(edi_1)
                
                if ((*(eax_7 + 8) & 0x10) != 0)
                    sub_6d0360(edi_1)
                
                if (var_44 s> 8)
                    sub_6d0330(edi_1)
                
                uint32_t eax_12 = var_40
                
                if (eax_12 == 0)
                    sub_6d0390(edi_1)
                    eax_12 = var_40
                
                *(edi_1 + 0x7c) |= 1
                
                if ((eax_12.b & 4) == 0)
                    sub_6cf1a0(eax_12, 0xff, edi_1, 1)
                
                sub_6cfae0(edi_1, eax_7)
                int32_t ecx_15 =
                    sub_6d02b0(&var_4c, eax_7, edi_1, &var_4c, &var_50, &var_44, &var_40)
                
                if ((var_40.b & 2) == 0)
                    ebx.b = 0
                else
                    int32_t var_8c_4 = 0
                    
                    if (sub_6c8170(arg1, var_4c, var_50, ecx_15, 0) == 0)
                        ebx.b = 0
                    else
                        char** var_5c
                        sub_5f1250(&var_5c, arg1[0x17])
                        var_8_1.b = 2
                        int32_t i = 0
                        char** eax_15 = var_5c
                        
                        if (arg1[0x17] s> 0)
                            do
                                eax_15[i] = sub_6818c0(arg1, 0, i)
                                i += 1
                            while (i s< arg1[0x17])
                            
                            edi_1 = var_48
                            eax_15 = var_5c
                        
                        int32_t var_58
                        
                        if (eax_15 == var_58)
                            eax_15 = nullptr
                        
                        int32_t var_8c_7 = sub_6cff30(edi_1, eax_15)
                        sub_6d0270(&var_48, &var_60)
                        ebx.b = 1
                        sub_538150(&var_5c)

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_70)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
