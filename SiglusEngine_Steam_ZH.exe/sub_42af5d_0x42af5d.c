// 函数: sub_42af5d
// 地址: 0x42af5d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t result = 0

if (*arg1 u< arg1[1])
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        char* eax_1 = *arg1
        char edx = *eax_1
        
        if (edx == 0xa)
            arg1[7] += 1
            result = 1
            *arg1 = &eax_1[1]
        else if (edx == 0x20 || (edx s>= 9 && edx s<= 0xd))
            *arg1 = &eax_1[1]
        else if (edx != 0x2f)
        label_42b02f:
            
            if ((arg1[0xa].b & 2) == 0 || edx != 0x3b)
                if (edx != 0x5c)
                    break
                
                void* eax_2
                
                if (&eax_1[1] u>= arg1[1] || eax_1[1] != 0xa)
                    if (edx != 0x5c)
                        break
                    
                    if (&eax_1[2] u>= arg1[1])
                        break
                    
                    if (eax_1[1] != 0xd)
                        break
                    
                    if (eax_1[2] != 0xa)
                        break
                    
                    eax_2 = &eax_1[3]
                else
                    eax_2 = &eax_1[2]
                
                arg1[7] += 1
                *arg1 = eax_2
            else
                sub_42a6ee(arg1)
        else if (&eax_1[1] u>= arg1[1] || eax_1[1] != edx)
            if (edx != 0x2f)
                goto label_42b02f
            
            int32_t edi_1 = arg1[1]
            
            if (&eax_1[1] u>= edi_1 || eax_1[1] != 0x2a)
                goto label_42b02f
            
            *arg1 = &eax_1[2]
            
            if (&eax_1[2] u< edi_1)
                char* eax_4
                
                do
                    eax_4 = *arg1
                    edx = *eax_4
                    
                    if (edx == 0x2a && &eax_4[1] u< edi_1 && eax_4[1] == 0x2f)
                        break
                    
                    if (edx == 0xa)
                        arg1[7] += 1
                    
                    *arg1 = &eax_4[1]
                while (&eax_4[1] u< arg1[1])
            
            void* eax_6 = *arg1
            
            if (eax_6 u>= edi_1)
                sub_42aba3(arg1[0xc], &arg1[2], 0x3e9, "comment continues past end of file")
            else
                *arg1 = eax_6 + 2
        else
            sub_42a6ee(arg1)
    while (*arg1 u< arg1[1])

return result
