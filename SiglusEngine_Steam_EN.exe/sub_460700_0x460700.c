// 函数: sub_460700
// 地址: 0x460700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* i = arg4
int32_t var_224 = arg2

if (i == 0)
    int32_t eax_2 = 0
    int32_t ecx = 0
    int32_t var_220 = 0
    int32_t var_21c = 0
    
    do
        if (arg2 u<= 0x3f && eax_2 u<= 7)
            int32_t* esi_2 = arg2 * 0x3920 + 0xf8c79c + i
            sub_57ee30(ecx + &data_8fcb48 + arg2 * 0x2d0, esi_2)
            esi_2[0x1e] += 1
            arg2 = var_224
            eax_2 = var_220
            ecx = var_21c
        
        eax_2 += 1
        i = &i[0x128]
        ecx += 0x40
        var_220 = eax_2
        var_21c = ecx
    while (i s< 0x940)
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_2

int32_t eax_5 = data_71929c
char var_215 = 0

if (eax_5 == 0x22 || eax_5 == 0x23 || eax_5 == 0x24)
    var_215 = 1

int32_t esi_3 = 0
int32_t eax_6 = 0
void* i_1 = nullptr
int32_t var_228 = 0
int32_t var_21c_1 = 0
void* i_2 = nullptr

do
    if (*i != 0 && (*(i + 0x3c) != 0 || (arg3 == 0 && var_215 == 0)))
        void var_214
        sub_4cfd70(&var_214, i)
        sub_57ef70(&var_214, esi_3, var_224, &var_214, *(i + 0x24), 1, 0)
    label_460876:
        eax_6 = var_21c_1
        i_1 = i_2
        arg2 = var_224
    else if (arg2 u<= 0x3f && esi_3 u<= 7)
        int32_t* esi_5 = i_1 + 0xf8c79c + arg2 * 0x3920
        sub_57ee30(var_21c_1 + &data_8fcb48 + arg2 * 0x2d0, esi_5)
        esi_5[0x1e] += 1
        esi_3 = var_228
        goto label_460876
    
    i_1 += 0x128
    esi_3 += 1
    eax_6 += 0x40
    var_228 = esi_3
    i = &i[0x40]
    i_2 = i_1
    var_21c_1 = eax_6
while (i_1 s< 0x940)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_6
