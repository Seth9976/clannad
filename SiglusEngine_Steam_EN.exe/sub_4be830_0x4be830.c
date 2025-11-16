// 函数: sub_4be830
// 地址: 0x4be830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_214
sub_4cfd70(&var_214, arg2)
char* edx = &var_214

while (true)
    char eax_2 = *edx
    
    if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
        edx = &edx[2]
        continue
    
    if (eax_2 == 0)
        break
    
    if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
        *edx = eax_2 - 0x20
    
    edx = &edx[1]

char* esi = &var_214
edx.b = 0x5c
int32_t eax_3 = sub_4d1610(&var_214, edx.b)
void var_213

if (eax_3 != 0xffffffff)
    esi = &var_213 + eax_3

edx.b = 0x2e
void* eax_4 = sub_4d1610(esi, edx.b)
int32_t eax_5

if (eax_4 != 0xffffffff)
    eax_5, edx = sub_4d0f10(eax_4 + 1 + esi, "AVI")

if (eax_4 != 0xffffffff && eax_5 == 0)
    goto label_4be91e

char* esi_1 = &var_214
edx.b = 0x5c
int32_t eax_6 = sub_4d1610(&var_214, edx.b)

if (eax_6 != 0xffffffff)
    esi_1 = &var_213 + eax_6

edx.b = 0x2e
uint32_t mciId = sub_4d1610(esi_1, edx.b)

if (mciId != 0xffffffff)
    mciId = sub_4d0f10(mciId + 1 + esi_1, "MPG")
    
    if (mciId == 0)
        eax_5 = 1
    label_4be91e:
        sub_4bdfd0(eax_5, arg3, arg2, arg4, arg5, arg6, arg7, eax_5)
        mciId = data_139270c
        
        if (mciId != 0xffffffff)
            data_2074448 = arg3
            int128_t dwParam2 = zx.o(0)
            dwParam2.d = arg3
            
            if (mciSendCommandA(mciId, 0x806, 1, &dwParam2) != 0)
                BOOL eax_8 = sub_4be270()
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_8
            
            mciId = sub_4be390()
            data_1392708 = 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return mciId
