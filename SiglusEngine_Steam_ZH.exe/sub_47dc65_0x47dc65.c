// 函数: sub_47dc65
// 地址: 0x47dc65
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* esi = arg4
int32_t edi
int32_t var_14 = edi
label_47dc79:

if (arg7 != 0)
    *arg7 = 0

if (arg8 != 0)
    *arg8 = 0

arg6 &= 0xffffffe7
*arg1 = arg2

if (sub_46e93f(arg1, esi) != 0)
    if (esi != 0 && *(esi + 4) == 0xd)
        void* eax_8 = *(esi + 0x10)
        
        if (eax_8 != 0 && *(eax_8 + 4) == 9)
            *(eax_8 + 0x21) &= 0xf3
    
    int32_t* var_18_2 = arg8
    return sub_47d6ee(arg1, arg2, arg3, nullptr, nullptr, esi, 0, nullptr, arg5, arg6, arg7)

if (*(esi + 4) != 0xd)
    sub_46e3d1(arg1, esi, 0, "internal error: expression expected")
    return 0x80004005

void* edx_1 = esi
void* var_20_3
char* var_18_3

if (*(esi + 0x18) * *(esi + 0x14) u> 1)
    var_18_3 = "expressions returning objects in an array or struct not yet implemented"
    int32_t var_1c_2 = 0xdac
    var_20_3 = esi
label_47de6f:
    sub_46e3d1(arg1, var_20_3, 0xdac, var_18_3)
    return 0x80004001

while (*(esi + 0x1c) != 0)
    while (true)
        if (*(esi + 4) == 1)
            esi = *(esi + 8)
            
            if (esi != 0)
                continue
        
        if (*(esi + 4) == 0xd && *(esi + 0x1c) == 0)
        label_47dcc1:
            esi = *(esi + 0x20)
            
            if (*(esi + 4) == 0xd)
                break
            
            continue
        
        int32_t eax_6 = *(esi + 4)
        
        if (eax_6 == 0xd && *(esi + 0x1c) == 0x1b)
            void* esi_1 = *(esi + 0x24)
            return sub_47dc24(arg2, arg3, *(esi_1 + 0x20), *(esi_1 + 0x24), nullptr, 
                *(*(esi + 0x20) + 0x18), arg6, arg7, arg8)
        
        if (eax_6 == 0xe)
            if (*(esi + 0x10) == 4)
                void* eax_7 = *(esi + 0x18)
                
                if (*(eax_7 + 4) == 0xd)
                    esi = eax_7
                    goto label_47dc79
            
            int32_t eax_11 = *(esi + 0x10)
            int32_t result
            
            if (eax_11 == 5)
                if (arg7 != 0)
                    int32_t* var_18_5 = arg7
                    int32_t var_1c_4 = *(esi + 0x1c)
                    result = sub_458de2()
                    
                    if (result s< 0)
                        return result
                    
                    int32_t* eax_12 = *arg7
                    int32_t** ecx_4 = *(esi + 0x1c)
                    int32_t esi_4
                    int32_t edi_3
                    edi_3, esi_4 = __builtin_memcpy((*(*eax_12 + 0xc))(eax_12), *(esi + 0x18), 
                        ecx_4 u>> 2 << 2)
                    __builtin_memcpy(edi_3, esi_4, ecx_4 & 3)
                
                if (arg8 == 0)
                    return 0
                
                *arg8 = 0
                return 0
            
            if (eax_11 == 6 && *(esi + 0x20) == 9)
                char* eax_16 = *(esi + 0x28)
                
                if (eax_16 != 0)
                    if (arg7 != 0)
                        char i
                        
                        do
                            i = *eax_16
                            eax_16 = &eax_16[1]
                        while (i != 0)
                        int32_t* var_18_7 = arg7
                        void* var_1c_5 = eax_16 - &eax_16[1] + 1
                        result = sub_458de2()
                        
                        if (result s< 0)
                            return result
                        
                        int32_t** eax_19 = *arg7
                        arg6 = eax_19
                        int32_t** eax_21 = (*eax_19)[4](eax_19)
                        int32_t esi_6
                        int32_t edi_6
                        edi_6, esi_6 =
                            __builtin_memcpy((*eax_19)[3](eax_19), *(esi + 0x28), eax_21 u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_6, eax_21 & 3)
                    
                    if (arg8 == 0)
                        return 0
                    
                    *arg8 = 1
                    return 0
        
        var_18_3 = "non-trivial object expressions not yet implemented"
        int32_t var_1c_6 = 0xdac
        var_20_3 = edx_1
        goto label_47de6f

goto label_47dcc1
