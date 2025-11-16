// 函数: sub_422710
// 地址: 0x422710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_13125b4 == 0
data_1312724 = 2

if (cond:0)
    return 

int32_t eax = data_13701cc

if (eax == 0)
    return 

int32_t edx = data_13126e0
int32_t ecx = data_13701b0
int32_t esi_1 = 0xffffffff
int32_t edi_1 = 0

if (edx s> 0)
    while (true)
        void* esi_2 = *(eax + (ecx << 3) + 4)
        
        if (*(esi_2 + 0x50) s> 0)
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = sx.q(data_13126dc)
            
            if (*(esi_2 + 0x20) - data_13126fc s>= (eax_2 - edx_1) s>> 1)
                esi_1 = edi_1
                break
            
            eax = data_13701cc
            edx = data_13126e0
        
        ecx += 1
        
        if (ecx == 0x3e8)
            ecx = 0
        
        edi_1 += 1
        
        if (edi_1 s>= edx)
            esi_1 = 0xffffffff
            break

sub_422290(arg1, arg2)

if (esi_1 != 0xffffffff)
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q(data_13126dc)
    int32_t ecx_3 = data_1312704
    int32_t edx_7 =
        *(*(data_13701cc + (mods.dp.d(sx.q(data_13701b0 + esi_1), 0x3e8) << 3) + 4) + 0x1c)
        - ((eax_10 - edx_5) s>> 1)
    
    if (edx_7 s>= ecx_3)
        ecx_3 = edx_7
        
        if (edx_7 s> data_1312708)
            ecx_3 = data_1312708
    
    data_13126fc = ecx_3
    data_1312700 = ecx_3

if (data_702fc0 != 0)
    sub_422820()
