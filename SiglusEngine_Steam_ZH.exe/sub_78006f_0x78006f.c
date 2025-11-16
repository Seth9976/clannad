// 函数: sub_78006f
// 地址: 0x78006f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char temp0 = arg1.b
arg1.b += arg3.b
int32_t ecx = arg3 - 1
int32_t* entry_ebx

if (temp0 == neg.b(arg3.b) || ecx == 0)
    entry_ebx += arg1

int32_t eax
eax.b = arg5[1]
int32_t eax_2
eax_2.b = *arg5
arg4[-0x31] = (*entry_ebx + *(&data_4e3e280 + (eax << 2)) + *(&data_4e3de80 + (eax_2 << 2))) u>> 8
arg4[-0x30] = *(&data_4e3da80 + arg4[-0x32])
int32_t ebx_3
ebx_3.b = arg5[2]
int32_t eax_5 = arg4[-0x31]
int32_t eax_7 = arg4[-0x37]
int32_t eax_9
eax_9.b = *(arg6 + 2)
char eax_10 = eax_9.b + (*(((eax_7
    + *(((eax_5 + *(((ebx_3 - eax_5) << 2) + arg4[-0x30]) - eax_7) << 2) + arg4[-0x34]) - eax_9) << 2)
    + __return_addr)).b
*(arg6 + 2) = eax_10
int32_t ebx_15
ebx_15.b = arg5[1]
int32_t eax_11 = arg4[-0x31]
int32_t eax_13 = arg4[-0x36]
int32_t eax_15
eax_15.b = *(arg6 + 1)
char eax_16 = eax_15.b + (*(((eax_13
    + *(((eax_11 + *(((ebx_15 - eax_11) << 2) + arg4[-0x30]) - eax_13) << 2) + arg4[-0x34])
    - eax_15) << 2) + __return_addr)).b
*(arg6 + 1) = eax_16
int32_t ebx_27
ebx_27.b = *arg5
int32_t eax_17 = arg4[-0x31]
int32_t eax_19 = arg4[-0x35]
int32_t eax_21
eax_21.b = *arg6
int32_t result = eax_21 + *(((eax_19
    + *(((eax_17 + *(((ebx_27 - eax_17) << 2) + arg4[-0x30]) - eax_19) << 2) + arg4[-0x34])
    - eax_21) << 2) + __return_addr)
*arg6 = result.b
int32_t i

do
    arg5 = &arg5[4]
    arg6 += 4
    int32_t temp1_1 = ecx
    ecx -= 1
    
    if (temp1_1 == 1)
        arg5 = &arg5[arg4[-0x47]]
        arg6 += arg4[-0x4b]
        
        if (arg7 == 1)
            *arg4
            return result
        
        arg7 -= 1
        ecx = arg4[-0x50]
    
    i.b = arg5[3]
while (i == 0)

return sub_780065(result, *((i << 2) + &data_4e3da80), ecx, arg4, arg5, arg6, arg8, arg9, arg10)
    __tailcall
