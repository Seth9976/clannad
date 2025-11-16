// 函数: sub_651040
// 地址: 0x651040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result_2
int32_t i_2
result_2, i_2 = __chkstk(0x246c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = 0x1228
int32_t var_246c = 0
int32_t i_1 = i_2
int32_t result_1 = result_2
int32_t result = 0xffffffff
char var_2468[0x122c]
_memset(&var_2468, 0, var_14)

if (i_1 s> 0)
    int32_t i
    
    do
        int32_t var_14_1 = 0x1228
        int32_t var_123c = 0
        char var_1238[0x121c]
        _memset(&var_1238, 0, var_14_1)
        
        if (result_1 s>= 0 && result_1 s< *(data_bac510 + 0x10b88)
                && sub_6a50c0(data_bac504 + 0x4b068, result_1, &var_123c) != 0)
            char eax_4
            
            if (result != 0xffffffff)
                eax_4 = sub_650590(&var_246c, &var_123c)
            
            if (result == 0xffffffff || eax_4 != 0)
                result = result_1
                sub_748840(&var_246c, &var_123c, 0x122c)
        
        result_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
