// 函数: sub_4156e0
// 地址: 0x4156e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg2 & 0xc0be2000) != 0 || (arg2.b & 1) != 0 || (0x400 & arg2) != 0)
    return 0x8876086c

int32_t edi
int32_t var_8_1 = edi
void* const edi_1 = arg1
int32_t ecx_1 = *(edi_1 + 0x214)

if ((0x400 & ecx_1) == 0 && (ecx_1.b & 0x40) == 0)
    int32_t* esi_2 = arg2 & 0x1cfff
    
    if (esi_2 == 0)
        int32_t* ecx_2
        
        if ((0x1000 & arg2) == 0)
            ecx_2 = ecx_1 & 0xffffefff
        else
            ecx_2 = ecx_1 | 0x1000
        
        esi_2 = ecx_2
    else
        if ((0x1000 & arg2) != 0)
            esi_2 |= 0x1000
        
        if ((ecx_1.b & 1) != 0)
            esi_2 |= 1
        
        arg2 &= 0xfffe3000
    
    void*** eax_1 = sub_745f3f(0x27c)
    void*** esi_3
    
    if (eax_1 == 0)
        esi_3 = nullptr
    else
        esi_3 = sub_41166f(eax_1, *(edi_1 + 0x230), edi_1 + 0xc, esi_2)
    
    if (esi_3 != 0)
        int32_t eax_3
        
        if ((esi_3[0x86].b & 0x20) == 0)
            eax_3 = 0
        else
            eax_3 = *(edi_1 + 0x23c)
        
        void* eax_4 = sub_40ea72(esi_3, *(edi_1 + 0x264), eax_3)
        arg1 = eax_4
        
        if (eax_4 s>= 0)
            if ((esi_3[0x86].b & 0x20) != 0)
                *(edi_1 + 0x218) |= 0x20
                esi_3[0x8d] = *(edi_1 + 0x234)
                int32_t* eax_6 = *(edi_1 + 0x234)
                (*(*eax_6 + 4))(eax_6)
                arg2:3.b |= 0x10
            
            void* eax_7 = sub_40f704(esi_3, edi_1)
            arg1 = eax_7
            
            if (eax_7 s>= 0)
                if ((esi_3[0x86].b & 0x20) == 0)
                    esi_3[0x8f] = *(edi_1 + 0x23c)
                
                void* eax_9 = sub_40b67c(esi_3, &esi_3[0x93], 0)
                arg1 = eax_9
                
                if (eax_9 s>= 0)
                    void* eax_10 = sub_414d49(esi_3, edi_1, arg2, arg3, arg4, arg5, arg6, 
                        *(edi_1 + 0x234), nullptr)
                    arg1 = eax_10
                    
                    if (eax_10 s>= 0)
                        if (esi_3[0x93] != 0)
                            int32_t* eax_11 = esi_3[0x92]
                            (*(*eax_11 + 0x30))(eax_11)
                            esi_3[0x93] = 0
                        
                        *arg7 = esi_3
                        esi_3 = nullptr
        
        if (esi_3 != 0)
            if (esi_3[0x93] != 0)
                int32_t* eax_13 = esi_3[0x92]
                (*(*eax_13 + 0x30))(eax_13)
            
            (*esi_3)[2](esi_3)
    else
        arg1 = 0x8007000e
else
    arg1 = 0x8876086c

return arg1
