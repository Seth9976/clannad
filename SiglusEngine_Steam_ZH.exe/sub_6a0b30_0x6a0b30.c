// 函数: sub_6a0b30
// 地址: 0x6a0b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_50 = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** i = data_4ebe29c

while (i != data_4ebe2a0)
    result = *i
    void* ebx_1
    ebx_1.b = 0
    int32_t* var_20
    
    if (result == 1 || result == 2 || result == 3 || result == 4 || result == 5)
        int32_t var_48
        result = sub_571430(&i[0x16], &var_48)
        int32_t var_8_9 = 0
        
        if (var_48 == 0)
            int32_t* var_60_10 = var_20
            result = sub_571710(result, data_4ebe2a0, &i[0x20], i)
            ebx_1 = data_4ebe2a0
            
            for (void* j = ebx_1 - 0x80; j != ebx_1; j -= 0xffffff80)
                result = sub_5719b0(j)
            
            data_4ebe2a0 -= 0x80
            ebx_1.b = 1
        
        int32_t var_8_10 = 0xffffffff
        int32_t* var_44
        
        if (var_44 != 0)
            result = &var_44[1]
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1))
                (*(*var_44 + 4))(eax_2)
                result = &var_44[2]
                bool cond:1_1 = *result != 1
                *result
                *result -= 1
                
                if (not(cond:1_1))
                    result = (*(*var_44 + 8))()
        
    label_6a0d42:
        
        if (ebx_1.b == 0)
            i -= 0xffffff80
    else
        if (result == 6)
            int32_t var_28
            sub_571430(&i[0x1a], &var_28)
            int32_t var_8_1 = 1
            
            if (var_28 == 0)
                ebx_1.b = 1
                int32_t* var_14
                i = *sub_6a40f0(&data_4ebe29c, &var_14, i)
            
            int32_t var_8_2 = 0xffffffff
            result = sub_54b010(&var_28)
            goto label_6a0d42
        
        if (result == 7)
            int32_t var_30
            sub_571430(&i[0x18], &var_30)
            int32_t var_8_3 = 2
            
            if (var_30 == 0)
                ebx_1.b = 1
                int32_t* var_18
                i = *sub_6a40f0(&data_4ebe29c, &var_18, i)
            
            int32_t var_8_4 = 0xffffffff
            result = sub_54b010(&var_30)
            goto label_6a0d42
        
        if (result == 8)
            int32_t var_38
            sub_571430(&i[0x1c], &var_38)
            int32_t var_8_5 = 3
            
            if (var_38 == 0)
                ebx_1.b = 1
                int32_t* var_1c
                i = *sub_6a40f0(&data_4ebe29c, &var_1c, i)
            
            int32_t var_8_6 = 0xffffffff
            result = sub_54b010(&var_38)
            goto label_6a0d42
        
        if (result == 9)
            int32_t var_40
            sub_571430(&i[0x1e], &var_40)
            int32_t var_8_7 = 4
            
            if (var_40 == 0)
                ebx_1.b = 1
                i = *sub_6a40f0(&data_4ebe29c, &var_20, i)
            
            int32_t var_8_8 = 0xffffffff
            result = sub_54b010(&var_40)
            goto label_6a0d42
        
        i -= 0xffffff80

fsbase->NtTib.ExceptionList = ExceptionList
return result
