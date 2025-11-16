// 函数: sub_4ad7e0
// 地址: 0x4ad7e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_703058

if (ecx s<= 0)
    ecx = 1
else if (ecx s> 0x40)
    ecx = 0x40

bool cond:0 = data_703054 u> 1
data_1bfe2dc = ecx
int32_t eax
int32_t edx

if (cond:0)
    eax = data_7030c0
    edx = data_7030bc
else
    eax = data_7030bc
    edx = data_7030c0

int32_t var_c = edx
int32_t i_8 = divs.dp.d(sx.q(eax - 1 + ecx), ecx)
int32_t eax_5 = i_8 << 2
sub_4d6960(eax_5, &data_1bfe2f0, &data_1bfe2ec, eax_5, "WAIP_INT_PAR")
void* esi = data_1bfe2f0.d
int32_t eax_7 = data_703050 - 0xca
data_1bfe2f0:4 = i_8
int32_t eax_13

switch (eax_7)
    case 0, 1, 2, 0x14, 0x15, 0x16, 0x1e, 0x1f, 0x20, 0x28, 0x29, 0x2a
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = sx.q(var_c + 1)
        eax_13 = (eax_11 - edx_2) s>> 1
        var_c = eax_13
    default
        eax_13 = var_c

int32_t ecx_1 = data_70305c
int32_t var_8 = ecx_1

if (ecx_1 s<= 0)
    ecx_1 = eax_13 << 2
    var_8 = ecx_1

int32_t eax_14 = data_703060

if (eax_14 == 0)
    int32_t eax_46 = ecx_1 s/ 6
    int32_t eax_48
    int32_t edx_15
    edx_15:eax_48 = sx.q(ecx_1)
    int32_t eax_50 = (eax_48 - edx_15) s>> 1
    uint32_t var_10_1
    uint32_t eax_52
    
    if (ecx_1 s<= 0)
        eax_52 = 0
        var_10_1 = 0
    else
        ecx_1 = var_8
        uint32_t temp1_2 = modu.dp.d(0:(sub_4d18c0(2)), ecx_1)
        eax_52 = temp1_2
        var_10_1 = temp1_2
    
    if (i_8 s> 0)
        int32_t edx_18 = eax_46
        int32_t i
        
        do
            if (eax_50 s<= 0)
                eax_52 += edx_18
            else
                ecx_1 = var_8
                eax_52 = var_10_1 + modu.dp.d(0:(sub_4d18c0(2)), eax_50) + eax_46
                edx_18 = eax_46
            
            var_10_1 = eax_52
            
            if (eax_52 s>= ecx_1)
                eax_52 -= ecx_1
                var_10_1 = eax_52
            
            *esi = eax_52
            esi += 4
            i = i_8
            i_8 -= 1
        while (i != 1)
else
    int32_t ecx_2 = 0
    
    if (eax_14 == 1)
        int32_t temp0_2 = divs.dp.d(sx.q(var_8 << 8), i_8)
        int32_t eax_36 = data_703054
        
        if (eax_36 != 0 && eax_36 != 2)
            void* edx_13 = esi - 4 + (i_8 << 2)
            
            if (i_8 s> 0)
                int32_t i_1
                
                do
                    edx_13 -= 4
                    int32_t eax_40 = ecx_2 s>> 8
                    ecx_2 += temp0_2
                    *(edx_13 + 4) = eax_40
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
        else if (i_8 s> 0)
            int32_t i_2
            
            do
                esi += 4
                int32_t eax_42 = ecx_2 s>> 8
                ecx_2 += temp0_2
                *(esi - 4) = eax_42
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
    else
        int32_t temp0_1 = divs.dp.d(sx.q(var_8 << 8), i_8)
        int32_t eax_20 = data_703054
        
        if (eax_20 != 0 && eax_20 != 2)
            void* edx_6 = esi - 4 + (i_8 << 2)
            
            if (i_8 s> 0)
                int32_t i_7 = i_8
                int32_t i_3
                
                do
                    edx_6 -= 4
                    int32_t eax_24 = ecx_2 s>> 8
                    ecx_2 += temp0_1
                    *(edx_6 + 4) = eax_24
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
                esi = data_1bfe2f0.d
        else if (i_8 s> 0)
            int32_t i_6 = i_8
            int32_t i_4
            
            do
                esi += 4
                int32_t eax_26 = ecx_2 s>> 8
                ecx_2 += temp0_1
                *(esi - 4) = eax_26
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
            esi = data_1bfe2f0.d
        
        if (i_8 s> 3)
            int32_t eax_31
            int32_t edx_7
            edx_7:eax_31 = sx.q(i_8)
            int32_t* esi_2 = esi + ((i_8 & 0xfffffffe) << 2) - 4
            int32_t i_9 = ((edx_7 & 3) + eax_31) s>> 2
            
            if (i_9 s> 0)
                int32_t* edx_9 = esi + 4
                int32_t i_5
                
                do
                    int32_t ecx_3 = *edx_9
                    edx_9 = &edx_9[2]
                    int32_t eax_32 = *esi_2
                    esi_2 = &esi_2[-2]
                    edx_9[-2] = eax_32
                    esi_2[2] = ecx_3
                    i_5 = i_9
                    i_9 -= 1
                while (i_5 != 1)

if (data_703050 - 0xe6 u> 4)
    data_1bff870 = var_8 + var_c
    int32_t eax_61 = data_7030c4
    data_1bff86c = 0
    data_1bff874 = eax_61
    return eax_61

data_1bff86c = var_8 + var_c
int32_t eax_59 = data_7030c4
data_1bff870 = 0
data_1bff874 = eax_59
return eax_59
