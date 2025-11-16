// 函数: sub_495f70
// 地址: 0x495f70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint8_t* ebx = arg2
char* esi = arg3
void var_830

if (arg3 != 0)
    arg2.b = 0x5c
    int32_t eax_2 = sub_4d1610(arg3, arg2.b)
    
    if (eax_2 != 0xffffffff)
        esi = &arg3[1 + eax_2]
    
    arg2.b = 0x2e
    int32_t eax_3 = sub_4d1610(esi, arg2.b)
    
    if (eax_3 != 0xffffffff)
        sub_4cfd70(&var_830, &esi[1 + eax_3])

char var_218
sub_4cfd70(&var_218, arg3)
char* esi_2 = &var_218
int32_t eax_4 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_4 != 0xffffffff)
    esi_2 = &var_217 + eax_4
int32_t eax_5 = sub_4d1610(esi_2, 0x2e)

if (eax_5 == 0xffffffff)
    eax_5 = sub_4cfc80(esi_2)
    esi_2 -= 1

void* var_84c = &var_830
char* var_850 = &var_218
esi_2[eax_5] = 0
void var_420
sub_4c4e40(sub_4c84d0(&var_420, "%s_tmp.%s"), ebx, &var_420, arg4, 4, 0x1e)
int32_t var_83c = 0
BOOL var_838 = 0
int32_t eax_8 = sub_4c4810(&var_838, &var_83c, &var_420, &var_838, "AvgSafetySaveComp", 4, 0x1e)

if (var_83c != 0)
    char ebx_1 = 1
    
    if (sub_4d1be0(eax_8, var_838, ebx, arg4) != 0)
        ebx_1 = 0
    
    sub_4d6c40(&var_83c, &var_838)
    
    if (ebx_1 != 0)
        if (arg3 != 0)
            void fileName
            sub_4c36f0(&fileName, 4, arg3, 0x1e, &fileName)
            DeleteFileA(&fileName)
        
        bool eax_11 = sub_4c3e90(&var_420, arg3) != 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_11

eax_8.b = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_8
