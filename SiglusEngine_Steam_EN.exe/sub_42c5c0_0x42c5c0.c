// 函数: sub_42c5c0
// 地址: 0x42c5c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_8 = eax_1
int32_t i = 0
char* esi = &data_8c4ca8

do
    if (*(esi - 4) != 0)
        int32_t ebx_1 = *(esi + 0x78)
        void var_214
        
        if (*esi != 0)
            void var_41c
            sub_4cfd70(&var_41c, esi)
            eax_1 = sub_4cfd70(&var_214, &esi[0x24])
            
            if (i s>= 0)
                eax_1 = sub_42c150(&var_214, &var_41c, i, *(esi + 0x48), &var_214, *(esi + 0x5c), 
                    *(esi + 0x4c), *(esi + 0x50), *(esi + 0x54), *(esi + 0x58))
        else if (i s>= 0)
            eax_1 = sub_42c150(&var_214, nullptr, i, 0xffffffff, &var_214, *(esi + 0x5c), 
                *(esi + 0x4c), *(esi + 0x50), *(esi + 0x54), *(esi + 0x58))
        *(esi + 0x78) = ebx_1
    
    i += 1
    esi = &esi[0x88]
while (i s< 2)

if (data_8c4ca4 == 0 || data_8c4ca8 == 0)
    data_13926d4 = 0
    data_13926d0 = 0xffffffff
    sub_5f02dd(var_8 ^ &__saved_ebp)
    return eax_1

sub_4cfd70(&data_13926d4, &data_8c4ca8)
int32_t eax_3 = data_8c4cf0
data_13926d0 = eax_3
sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_3
