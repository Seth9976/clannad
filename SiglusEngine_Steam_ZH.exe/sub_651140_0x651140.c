// 函数: sub_651140
// 地址: 0x651140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x2474)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_14 = 0x1228
char var_18 = 0
char var_2470[0x1230]
char (* var_1c)[0x1230] = &var_2470
int32_t var_2474 = 0
int32_t result = 0xffffffff
_memset(var_1c, var_18, var_14)
int32_t esi = 0

if (edx s> 0)
    do
        int32_t var_14_1 = 0x1228
        int32_t var_123c = 0
        char var_1238[0x121c]
        _memset(&var_1238, 0, var_14_1)
        
        if (sub_6a50c0(data_bac504 + 0x4b068, *(data_bac510 + 0x10b88) + esi + ecx, &var_123c) == 0)
            char eax_7
            
            if (result != 0xffffffff)
                eax_7 = sub_650590(&var_2474, &var_123c)
            
            if (result == 0xffffffff || eax_7 != 0)
                result = esi + ecx
                sub_748840(&var_2474, &var_123c, 0x122c)
        
        esi += 1
    while (esi s< edx)

int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
