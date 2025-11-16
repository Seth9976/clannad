// 函数: sub_647500
// 地址: 0x647500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t edi = arg6
int32_t eax = arg2
int32_t var_8_1 = eax

if (edi == 0 || edi == 1)
    eax = arg4
    
    if (eax s<= 0)
        eax.b = 0
        return eax
    
    arg3[3] = 1
    arg3[4] = eax
else
    if (eax s<= 0)
        eax.b = 0
        return eax
    
    arg3[3] = eax
    arg3[4] = 1

sub_5979b0(arg3, eax << 2)
int32_t* ebx = *arg3

if (ebx == arg3[1])
    ebx = nullptr

int32_t ecx

if (edi == 1 || edi == 3)
    ecx.b = arg5 == 0
else
    ecx.b = arg5

arg6:3.b = ecx.b
int32_t eax_2

if (edi == 0 || edi == 1)
    eax_2 = arg4
    var_8_1 = eax_2
else
    eax_2 = var_8_1

int32_t esi_1 = 0

if (eax_2 s> 0)
    int32_t edi_1 = eax_2 - 1
    
    do
        int32_t eax_3 = esi_1
        int32_t edx
        
        if (edi_1 != 0)
            if (edi_1 s<= 0)
                if (edi_1 s< 0)
                    if (esi_1 s< edi_1)
                        eax_3 = edi_1
                    else if (esi_1 s> 0)
                        eax_3 = 0
            else if (esi_1 s< 0)
                eax_3 = 0
            else if (esi_1 s> edi_1)
                eax_3 = edi_1
            
            edx = divs.dp.d(sx.q(eax_3 * 0xff), edi_1)
        else
            edx = 0xff
        
        if (ecx.b == 0)
            edx = 0xff - edx
            ecx.b = arg6:3.b
        
        esi_1 += 1
        *ebx = ((edx << 8 | edx) << 8 | edx) << 8 | edx
        ebx = &ebx[1]
    while (esi_1 s< var_8_1)

eax_2.b = 1
return eax_2
