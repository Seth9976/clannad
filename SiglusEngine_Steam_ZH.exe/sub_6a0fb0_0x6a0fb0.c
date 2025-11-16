// 函数: sub_6a0fb0
// 地址: 0x6a0fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9c48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

for (struct _EXCEPTION_REGISTRATION_RECORD*** i = data_4ebe29c; i != data_4ebe2a0; i -= 0xffffff80)
    if (i[0x15].b != 0)
        eax_3 = *i
        
        if (eax_3 == 1 || eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
            int32_t* var_2c
            sub_571430(&i[0x16], &var_2c)
            int32_t var_8_5 = 0
            int32_t* edi = var_2c
            
            if (edi != 0)
                eax_3 = *i
                
                if (eax_3 == 1)
                    if (sub_6f3610(edi, i[2], i[3], i[6], i[7], i[8], i[9]).b == 0)
                    label_6a11d6:
                        int32_t var_8_9 = 0xffffffff
                        sub_54b010(&var_2c)
                        int32_t eax_13
                        eax_13.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_13
                    
                    if (i[9] != 0)
                        sub_6f3d50(edi, 0, eax_2.b, arg2, arg1)
                    
                    *(edi + 0x26) = 1
                else if (eax_3 == 2)
                    eax_3 = ___std_fs_change_permissions@12(edi, &i[0xa])
                label_6a1131:
                    
                    if (eax_3.b == 0)
                        goto label_6a11d6
                else if (eax_3 == 3)
                    eax_3 = sub_6f4310(edi, &i[0xa])
                    goto label_6a1131
            
            int32_t var_8_6 = 0xffffffff
            int32_t* var_28
            
            if (var_28 != 0)
                bool cond:0_1 = var_28[1] != 1
                var_28[1]
                var_28[1] -= 1
                
                if (not(cond:0_1))
                    (*(*var_28 + 4))(eax_2)
                    bool cond:1_1 = var_28[2] != 1
                    var_28[2]
                    var_28[2] -= 1
                    
                    if (not(cond:1_1))
                        (*(*var_28 + 8))()
        else if (eax_3 == 6)
            int32_t* var_1c
            sub_571430(&i[0x1a], &var_1c)
            int32_t var_8_1 = 1
            int32_t* ecx_2 = var_1c
            
            if (ecx_2 != 0 && sub_6f30a0(ecx_2, &i[0xa], 0) == 0)
                int32_t var_8_7 = 0xffffffff
                sub_54b010(&var_1c)
                int32_t eax_11
                eax_11.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11
            
            int32_t var_8_2 = 0xffffffff
            sub_54b010(&var_1c)
        else if (eax_3 == 7)
            int32_t* var_24
            sub_571430(&i[0x18], &var_24)
            int32_t var_8_3 = 2
            int32_t* ecx_5 = var_24
            
            if (ecx_5 != 0 && sub_6f66c0(ecx_5, i[2], i[3]) == 0)
                int32_t var_8_8 = 0xffffffff
                sub_54b010(&var_24)
                int32_t eax_12
                eax_12.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            
            int32_t var_8_4 = 0xffffffff
            sub_54b010(&var_24)

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
