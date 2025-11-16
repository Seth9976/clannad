// 函数: sub_6d3d90
// 地址: 0x6d3d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
int32_t i_5 = *ebx

if (*(ebx + 9) != 8)
    return 

arg3.b = ebx[2].b
uint32_t eax_1

if (arg3.b == 2 && arg4 != 0)
    if (i_5 != 0)
        int32_t i_3 = i_5
        void* edi = arg2
        int32_t i
        
        do
            uint32_t esi_1 = zx.d(*arg2)
            arg2 = &arg2[3]
            edi += 1
            i = i_3
            i_3 -= 1
            arg1.b = (((esi_1 & 0xf8) << 5 | (zx.d(arg2[0xfffffffe]) & 0xf8)) << 2
                | (zx.d(arg2[0xffffffff]) s>> 3 & 0x1f))[arg4]
            *(edi - 1) = arg1.b
        while (i != 1)
    
    arg1.b = *(ebx + 9)
    *(ebx + 0xb) = arg1.b
    ebx[2].b = 3
    *(ebx + 0xa) = 1
    eax_1 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        ebx[1] = (eax_1 u>> 3) * i_5
        return 
    
    ebx[1] = (eax_1 * i_5 + 7) u>> 3
    return 

if (arg3.b == 6 && arg4 != 0)
    if (i_5 != 0)
        int32_t i_4 = i_5
        void* edi_1 = arg2
        int32_t i_1
        
        do
            uint32_t esi_7 = zx.d(*arg2)
            arg2 = &arg2[4]
            edi_1 += 1
            i_1 = i_4
            i_4 -= 1
            arg1.b = (((esi_7 & 0xf8) << 5 | (zx.d(arg2[0xfffffffd]) & 0xf8)) << 2
                | (zx.d(arg2[0xfffffffe]) s>> 3 & 0x1f))[arg4]
            *(edi_1 - 1) = arg1.b
        while (i_1 != 1)
    
    arg1.b = *(ebx + 9)
    *(ebx + 0xb) = arg1.b
    ebx[2].b = 3
    *(ebx + 0xa) = 1
    eax_1 = zx.d(arg1.b)
    
    if (arg1.b u>= 8)
        ebx[1] = (eax_1 u>> 3) * i_5
        return 
    
    ebx[1] = (eax_1 * i_5 + 7) u>> 3
    return 

if (arg3.b != 3 || arg5 == 0 || i_5 == 0)
    return 

int32_t i_2

do
    arg1 = zx.d(*arg2)
    arg2 = &arg2[1]
    arg1.b = *(arg1 + arg5)
    arg2[0xffffffff] = arg1.b
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
