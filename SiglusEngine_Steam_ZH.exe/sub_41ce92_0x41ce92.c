// 函数: sub_41ce92
// 地址: 0x41ce92
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[1] = 0
*arg1 = 0
uint32_t ecx_1 = zx.d(arg4.w)
arg1[2] = arg4

if (ecx_1 u<= 0 || ecx_1 u> 5 || (arg4 & 0xff800000) != 0)
    return 0x8876086c

int32_t edi
int32_t var_c_1 = edi
arg3[0x12] = arg4 & 0x200000
arg2[0x12] = arg4 & &__dos_header
arg2[0x10] = arg4 & 0x80000
arg2[0x11] = arg4 & 0x100000
int32_t* eax_2 = sub_42800a(arg2)
arg1[1] = eax_2
int32_t result

if (eax_2 == 0)
    result = 0x80004005
else
    int32_t* eax_3 = sub_42800a(arg3)
    *arg1 = eax_3
    
    if (eax_3 == 0)
        result = 0x80004005
    else
        result = sub_41eca4(arg1[1], eax_3)
        
        if (result s>= 0)
            if (sub_41a957(arg1) s>= 0)
                result = 0
            else if (sub_41aa61(arg1) s>= 0)
                result = 0
            else if (sub_41ab34(arg1) s>= 0)
                result = 0
            else if (sub_41ad07(arg1) s>= 0)
                result = 0
            else
                int32_t eax_9
                int80_t st0_1
                st0_1, eax_9 = sub_41aedd(arg1)
                
                if (eax_9 s>= 0)
                    result = 0
                else
                    int32_t eax_10
                    int80_t st0_2
                    st0_2, eax_10 = sub_41b2a5(arg1)
                    
                    if (eax_10 s>= 0)
                        result = 0
                    else
                        int32_t eax_11
                        int80_t st0_3
                        st0_3, eax_11 = sub_41b799(arg1)
                        
                        if (eax_11 s>= 0)
                            result = 0
                        else
                            int32_t eax_12
                            int80_t st0_4
                            st0_4, eax_12 = sub_41bb3b(arg1)
                            
                            if (eax_12 s>= 0)
                                result = 0
                            else if (sub_41c8d2(arg1) s>= 0)
                                result = 0
                            else if (sub_41c24c(arg1) s< 0)
                                result = 0x80004005
                            else
                                result = 0

int32_t* ecx_16 = arg1[1]

if (ecx_16 != 0)
    (**ecx_16)(1)
    arg1[1] = 0

int32_t* ecx_17 = *arg1

if (ecx_17 != 0)
    (**ecx_17)(1)
    *arg1 = 0

return result
