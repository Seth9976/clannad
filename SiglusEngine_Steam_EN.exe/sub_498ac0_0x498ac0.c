// 函数: sub_498ac0
// 地址: 0x498ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
char* edi = data_20740d0
int32_t eax

if (data_1311178 == 0)
    if (*arg1 == 0)
        bool cond:1_1 = arg1[0x44] != 0
        *arg1 = 1
        
        if (not(cond:1_1))
            if (arg1[0x45] s<= 1)
                sub_4d1ba0(eax, 0x101, &arg1[1], 0)
                sub_498850(arg1, edi)
                arg1[0xc9] = 2
                
                if (data_1311178 == 0)
                    arg1[0x44] = 1
                    *arg1 = 1
                
                int32_t eax_1
                eax_1.b = 1
                return eax_1
            
            arg1[0x44] = 1
    else
        arg1[0x44] = 1

eax.b = 0
return eax
