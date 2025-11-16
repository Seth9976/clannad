// 函数: sub_408645
// 地址: 0x408645
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_45e3a1(arg1, arg2)
int16_t* eax = *arg1

while (*eax != 0xff)
    char edx = *(eax + 7)
    uint32_t ecx
    
    if (edx != 0)
        ecx.b = eax[3].b
    
    if (edx == 0 || ecx.b == 5 || ecx.b == 0xa)
        switch (zx.d(eax[3].b))
            case 0
                if (eax[2].b == 2)
                    arg1[0x22] = eax
            case 1
                if (eax[2].b u<= 3)
                    arg1[0x23] = eax
            case 2
                ecx.b = eax[2].b
                
                if (ecx.b == 5 || ecx.b == 4)
                    arg1[0x24] = eax
            case 3
                if (eax[2].b == 2)
                    arg1[0x25] = eax
            case 5
                if (eax[2].b u<= 3 && edx u< 8)
                    arg1[zx.d(edx) + 0x28] = eax
            case 0xa
                if (edx == 0)
                    ecx.b = eax[2].b
                    
                    if (ecx.b == 3 || ecx.b == 4)
                        arg1[0x26] = eax
                else if (edx == 1)
                    ecx.b = eax[2].b
                    
                    if (ecx.b == 3 || ecx.b == 4)
                        arg1[0x27] = eax
    
    eax = &eax[4]

arg1[0x30] = sub_40b39f(*arg1, 0)
return 0
