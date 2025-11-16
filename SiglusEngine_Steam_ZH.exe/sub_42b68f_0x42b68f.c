// 函数: sub_42b68f
// 地址: 0x42b68f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[0xa] = arg2
int32_t edi
int32_t var_10 = edi
arg3[4] = arg1[6]
void* ebx = nullptr
arg3[5] = arg1[7]

if (sub_42af5d(arg1) == 0)
    arg3[4] = arg1[6]
    arg3[5] = arg1[7]
    char* eax_6 = *arg1
    
    if (eax_6 u< arg1[1])
        char ecx = *eax_6
        
        if (ecx s< 0x30)
            if (ecx != 0x2e)
                goto label_42b76f
            
            goto label_42b6ff
        
        if (ecx s<= 0x39 || ecx == 0x2e)
        label_42b6ff:
            void* ebx_1 = sub_42a749(arg1, eax_6, &arg3[2])
            
            if (ebx_1 == 0)
                ebx_1 = sub_42b086(arg1, *arg1, &arg3[2])
                int32_t* ecx_4 = arg1
                
                if (ebx_1 != 0)
                    goto label_42b75c
                
                ebx_1 = sub_42b12a(ecx_4, *arg1, &arg3[2])
                ecx_4 = arg1
                
                if (ebx_1 != 0)
                    goto label_42b75c
                
                ebx_1 = sub_42b1a8(ecx_4, *arg1, &arg3[2])
                
                if (ebx_1 == 0)
                    ebx = sub_42a958(arg1, *arg1, &arg3[2])
                    *arg3 = 1
                else
                    ecx_4 = arg1
                label_42b75c:
                    *arg3 = 2
                    ebx = ebx_1 + sub_42aab0(ecx_4, *arg1 + ebx_1, arg3)
            else
                *arg3 = 5
                ebx = ebx_1 + sub_42aa66(arg1, *arg1 + ebx_1, arg3)
        else
        label_42b76f:
            
            if (ecx == 0x27)
                ebx = sub_42b502(arg1, eax_6, &arg3[2])
                
                if (ebx == 0)
                    ebx = sub_42a958(arg1, *arg1, &arg3[2])
                    *arg3 = 1
                else
                    *arg3 = 2
            else if (ecx == 0x22)
                void* var_14_8 = &arg3[2]
                ebx = sub_42b545(arg1, eax_6)
                
                if (ebx == 0)
                    ebx = sub_42a958(arg1, *arg1, &arg3[2])
                    *arg3 = 1
                else
                    *arg3 = 0xa
            else if ((arg1[0xa].b & 4) == 0 || ecx != 0x3c)
                if (_isalpha(sx.d(ecx)) != 0 || **arg1 == 0x5f)
                    if ((arg1[0xa].b & 2) != 0)
                        ebx = sub_42b3e4(arg1, *arg1, &arg3[2])
                    
                    if ((arg1[0xa].b & 2) == 0 || ebx == 0)
                        ebx = sub_42a8d4(arg1, *arg1, &arg3[2])
                        
                        if (ebx == 0)
                            ebx = sub_42a958(arg1, *arg1, &arg3[2])
                            *arg3 = 1
                        else
                            *arg3 = 9
                    else
                        *arg3 = 0
                else
                    ebx = sub_42a958(arg1, *arg1, &arg3[2])
                    *arg3 = 1
            else
                void* var_14_9 = &arg3[2]
                ebx = sub_42b545(arg1, eax_6)
                
                if (ebx == 0)
                    ebx = sub_42a958(arg1, *arg1, &arg3[2])
                    *arg3 = 1
                else
                    *arg3 = 0xb
    else
        *arg3 = 0xd
else
    *arg3 = 0xc

arg3[6] = *arg1
arg3[7] = ebx
*arg1 += ebx
return 0
