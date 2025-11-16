// 函数: sub_1a9624f
// 地址: 0x1a9624f
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* edx = data_1c09028
void* edi = &edx[data_1c09024 * 5]
void* ecx_1 = (arg1 + 0x17) & 0xfffffff0
uint32_t var_10
uint32_t var_c
uint32_t esi

if ((ecx_1 s>> 4) - 1 s>= 0x20)
    esi = 0
    var_10 = 0
    var_c = 0xffffffff u>> (((ecx_1 s>> 4) - 1).b - 0x20)
else
    esi = 0xffffffff u>> ((ecx_1 s>> 4) - 1).b
    var_c = 0xffffffff
    var_10 = esi

int32_t* eax_4 = data_1c09018
int32_t* ebx = eax_4
arg1 = ebx

if (ebx u< edi)
    while (((ebx[1] & var_c) | (*ebx & esi)) == 0)
        ebx = &ebx[5]
        arg1 = ebx
        
        if (ebx u>= edi)
            break

if (ebx == edi)
    ebx = edx
    bool cond:4_1
    
    while (true)
        cond:4_1 = ebx != eax_4
        arg1 = ebx
        
        if (ebx u>= eax_4)
            break
        
        if (((ebx[1] & var_c) | (*ebx & esi)) != 0)
            cond:4_1 = ebx != eax_4
            break
        
        ebx = &ebx[5]
    
    if (not(cond:4_1))
        bool cond:5_1
        
        while (true)
            cond:5_1 = ebx != edi
            
            if (ebx u>= edi)
                break
            
            if (ebx[2] != 0)
                cond:5_1 = ebx != edi
                break
            
            ebx = &ebx[5]
            arg1 = ebx
        
        if (not(cond:5_1))
            ebx = edx
            bool cond:7_1
            
            while (true)
                cond:7_1 = ebx != eax_4
                arg1 = ebx
                
                if (ebx u>= eax_4)
                    break
                
                if (ebx[2] != 0)
                    cond:7_1 = ebx != eax_4
                    break
                
                ebx = &ebx[5]
            
            if (not(cond:7_1))
                ebx = sub_1a96558()
                arg1 = ebx
                
                if (ebx == 0)
                    return nullptr
        
        *ebx[4] = sub_1a96609(ebx)
        
        if (*ebx[4] == 0xffffffff)
            return nullptr

data_1c09018 = ebx
int32_t* eax_8 = ebx[4]
int32_t edx_1 = *eax_8
int32_t var_8_1 = edx_1

if (edx_1 == 0xffffffff || ((eax_8[edx_1 + 0x31] & var_c) | (eax_8[edx_1 + 0x11] & esi)) == 0)
    var_8_1 = 0
    void* ecx_15 = &eax_8[0x11]
    esi = var_10
    
    if (((eax_8[0x31] & var_c) | (eax_8[0x11] & var_10)) == 0)
        int32_t edx_6
        
        do
            var_8_1 += 1
            edx_6 = *(ecx_15 + 0x84) & var_c
            ecx_15 += 4
        while ((edx_6 | (esi & *ecx_15)) == 0)
    
    edx_1 = var_8_1

int32_t edi_9 = 0
int32_t i = eax_8[edx_1 + 0x11] & esi

if (i == 0)
    i = eax_8[edx_1 + 0x31] & var_c
    edi_9 = 0x20

while (i s>= 0)
    i <<= 1
    edi_9 += 1

int32_t* edx_8 = eax_8[edx_1 * 0x81 + 0x51 + edi_9 * 2 + 1]
void* ecx_23 = *edx_8 - ecx_1
int32_t esi_5 = (ecx_23 s>> 4) - 1

if (esi_5 s> 0x3f)
    esi_5 = 0x3f

if (esi_5 == edi_9)
label_1a96506:
    
    if (ecx_23 != 0)
        *edx_8 = ecx_23
        *(ecx_23 + edx_8 - 4) = ecx_23
else
    if (edx_8[1] == edx_8[2])
        if (edi_9 s>= 0x20)
            uint32_t ebx_5 = not.d(0x80000000 u>> (edi_9.b - 0x20))
            eax_8[var_8_1 + 0x31] &= ebx_5
            char temp1_1 = *(eax_8 + edi_9 + 4)
            *(eax_8 + edi_9 + 4) -= 1
            
            if (temp1_1 != 1)
                ebx = arg1
            else
                ebx = arg1
                ebx[1] &= ebx_5
        else
            uint32_t ebx_2 = not.d(0x80000000 u>> edi_9.b)
            eax_8[var_8_1 + 0x11] &= ebx_2
            char temp2_1 = *(eax_8 + edi_9 + 4)
            *(eax_8 + edi_9 + 4) -= 1
            
            if (temp2_1 != 1)
                ebx = arg1
            else
                ebx = arg1
                *ebx &= ebx_2
    
    *(edx_8[2] + 4) = edx_8[1]
    *(edx_8[1] + 8) = edx_8[2]
    
    if (ecx_23 != 0)
        void* ecx_35 = &eax_8[edx_1 * 0x81 + 0x51 + esi_5 * 2]
        edx_8[1] = eax_8[edx_1 * 0x81 + 0x51 + esi_5 * 2 + 1]
        edx_8[2] = ecx_35
        *(ecx_35 + 4) = edx_8
        *(edx_8[1] + 8) = edx_8
        
        if (edx_8[1] == edx_8[2])
            int32_t ecx_37
            ecx_37.b = *(esi_5 + eax_8 + 4)
            arg1:3.b = ecx_37.b
            
            if (esi_5 s>= 0x20)
                ecx_37.b += 1
                *(esi_5 + eax_8 + 4) = ecx_37.b
                
                if (arg1:3.b == 0)
                    ebx[1] |= 0x80000000 u>> (esi_5.b - 0x20)
                
                eax_8[var_8_1 + 0x31] |= 0x80000000 u>> (esi_5.b - 0x20)
            else
                ecx_37.b += 1
                *(esi_5 + eax_8 + 4) = ecx_37.b
                
                if (arg1:3.b == 0)
                    *ebx |= 0x80000000 u>> esi_5.b
                
                eax_8[var_8_1 + 0x11] |= 0x80000000 u>> esi_5.b
        
        goto label_1a96506

void** edx_9 = edx_8 + ecx_23
*edx_9 = ecx_1 + 1
*(edx_9 + ecx_1 - 4) = ecx_1 + 1
int32_t ecx_45 = eax_8[edx_1 * 0x81 + 0x51]
eax_8[edx_1 * 0x81 + 0x51] = ecx_45 + 1

if (ecx_45 == 0 && ebx == data_1c09020 && var_8_1 == data_1c09014)
    data_1c09020 = 0

*eax_8 = var_8_1
return &edx_9[1]
