// 函数: sub_47ee7f
// 地址: 0x47ee7f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
void* edi_1 = arg2
*(edi_1 + 0x58) = arg1[0x17] << 2
int32_t eax_2 = *(edi_1 + 0x30)
int32_t var_8 = 1
int32_t var_c = 0

if (eax_2 == 0x1f)
    var_8 = 2

if (arg1[0x1e] != 0)
    if (eax_2 == 0x1a || eax_2 == 0x19 || eax_2 == 0x1c || eax_2 == 0x1e)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7e9, 
            "call, callnz, label, and ret instructions are not allowed in assembly fragments")
        return 0x80004005
    
    if (eax_2 == 0x14 || eax_2 == 0x15 || eax_2 == 0x16 || eax_2 == 0x17 || eax_2 == 0x18)
        void* eax_3 = *(edi_1 + 0x48)
        
        if (eax_3 != 0 && *(eax_3 + 0x10) == 0)
            sub_42aba3(*arg1, edi_1 + 0x10, 0x7ea, 
                "Matrices cannot be specified in temp registers with the fragment linker")
            return 0x80004005

void* ebx_1 = *(edi_1 + 0x3c)

if (ebx_1 != 0 && *(ebx_1 + 4) == 0x13)
    var_8 += 1
    
    if (*(ebx_1 + 0x10) == 0xffffffff)
        var_c = 1
    
    if (*(ebx_1 + 0x14) != 0)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7de, 
            "source modifiers are not allowed on destination parameters")
        arg1[0x13] = 1
    
    void* ebx_2 = *(ebx_1 + 0x28)
    
    if (ebx_2 != 0)
        int32_t eax_5 = arg1[0xe]
        
        if (eax_5 s< 4 || eax_5 s> 5)
            sub_42aba3(*arg1, edi_1 + 0x10, 0x7d8, 
                "relative addressing of destination parameters is not supported in this shader version")
            arg1[0x13] = 1
        else
            if (*(ebx_2 + 0x10) == 0xffffffff)
                var_c = 1
            
            if (*(ebx_2 + 0x28) != 0)
                sub_42aba3(*arg1, edi_1 + 0x10, 0x7d9, 
                    "only one address register reference is allowed in a relative address expression")
                arg1[0x13] = 1
            
            var_8 += 1

void* eax_8 = *(edi_1 + 0x40)

if (eax_8 != 0 && *(eax_8 + 4) == 0x13)
    int32_t eax_9 = arg1[0xe]
    
    if (eax_9 s>= 0 && eax_9 s<= 1)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7e5, 
            "predicates are not supported in this shader version")
        arg1[0x13] = 1
    else if (eax_9 s>= 6 && eax_9 s<= 0xa)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7e5, 
            "predicates are not supported in this shader version")
        arg1[0x13] = 1
    
    void* ebx_3 = *(edi_1 + 0x40)
    var_8 += 1
    
    if (*(ebx_3 + 0x10) == 0xffffffff)
        var_c = 1
    
    int32_t eax_11 = *(ebx_3 + 0x14)
    
    if (eax_11 != 0 && eax_11 != 0xd000000)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7e3, "source modifiers are not allowed on predicates")
        arg1[0x13] = 1
    
    if (*(ebx_3 + 0x28) != 0)
        sub_42aba3(*arg1, edi_1 + 0x10, 0x7e4, 
            "relative addressing of predicates is not supported in this shader version")
        arg1[0x13] = 1

arg2 = nullptr
void* ebx_4 = edi_1 + 0x44

do
    void* ecx = *ebx_4
    
    if (ecx == 0)
        break
    
    int32_t eax_15 = *(edi_1 + 0x30)
    var_8 += 1
    
    if (eax_15 != 0x51 && eax_15 != 0x30 && eax_15 != 0x2f)
        if (*(ecx + 0x10) == 0xffffffff)
            var_c = 1
        
        void* eax_16 = *(ecx + 0x28)
        
        if (eax_16 != 0)
            if (*(eax_16 + 0x10) == 0xffffffff)
                var_c = 1
            
            if (*(eax_16 + 0x28) != 0)
                sub_42aba3(*arg1, edi_1 + 0x10, 0x7d9, 
                    "only one address register reference is allowed in a relative address expression")
                arg1[0x13] = 1
            
            if (arg1[0xe] != 0)
                var_8 += 1
    
    arg2 += 1
    ebx_4 += 4
while (arg2 u< 4)

int32_t result = sub_47edc5(arg1, var_8)

if (result s< 0)
    return result

int32_t eax_19 = arg1[0x17] + var_8
int32_t ebx_5 = *(edi_1 + 0x30)

if (ebx_5 == 3)
    int32_t eax_20 = arg1[0xe]
    
    if (eax_20 s>= 0 && eax_20 s<= 5)
    label_47f140:
        void* eax_21 = *(edi_1 + 0x48)
        int32_t ecx_2 = *(eax_21 + 0x14)
        ebx_5 = 2
        bool cond:6_1
        
        if (ecx_2 u> 0x7000000)
            if (ecx_2 == 0x8000000)
                *(eax_21 + 0x14) = 0x7000000
            else if (ecx_2 == 0x9000000 || ecx_2 == 0xa000000)
                sub_42aba3(*arg1, edi_1 + 0x10, 0x7dd, 
                    "source modifiers incompatible with SUB instruction")
                arg1[0x13] = 1
            else if (ecx_2 == 0xb000000)
                *(eax_21 + 0x14) = 0xc000000
            else if (ecx_2 == 0xc000000)
                *(eax_21 + 0x14) = 0xb000000
            else
                cond:6_1 = ecx_2 != 0xd000000
            label_47f198:
                
                if (not(cond:6_1))
                    sub_42aba3(*arg1, edi_1 + 0x10, 0x7dd, 
                        "source modifiers incompatible with SUB instruction")
                    arg1[0x13] = 1
        else
            switch (ecx_2)
                case 0
                    *(eax_21 + 0x14) = &data_1000000
                case 0x7000000
                    *(eax_21 + 0x14) = 0x8000000
                case &data_1000000
                    *(eax_21 + 0x14) = 0
                case &data_2000000
                    *(eax_21 + 0x14) = &data_3000000
                case &data_3000000
                    *(eax_21 + 0x14) = &data_2000000
                case &data_4000000
                    *(eax_21 + 0x14) = "D"
                default
                    if (ecx_2 != "D")
                        cond:6_1 = ecx_2 != 0x6000000
                        goto label_47f198
                    
                    *(eax_21 + 0x14) = &data_4000000
    else if (eax_20 s>= 0xa && eax_20 s<= 0xe)
        goto label_47f140

if (*(edi_1 + 0x54) != 0)
    ebx_5 |= 0x40000000

if (*(edi_1 + 0x40) != 0)
    ebx_5 |= 0x10000000

int32_t eax_23 = arg1[0xe]

if (eax_23 s>= 1 && eax_23 s<= 5)
    ebx_5 |= (var_8 - 1) << 0x18
else if (eax_23 s>= 0xa && eax_23 s<= 0xe)
    ebx_5 |= (var_8 - 1) << 0x18

int32_t eax_27 = *(edi_1 + 0x30)

if (eax_27 == 0x29 || eax_27 == 0x2d || eax_27 == 0x5e)
    ebx_5 |= (*(edi_1 + 0x38) & 7) << 0x10

arg1[0x16][arg1[0x17]] = ebx_5
arg1[0x17] += 1
int32_t eax_32 = arg1[0x17]

if (*(edi_1 + 0x30) == 0x1f)
    arg1[0x16][eax_32] = *(edi_1 + 0x38) | 0x80000000
    arg1[0x17] += 1
    eax_32 = arg1[0x17]

void* ecx_6 = *(edi_1 + 0x3c)

if (ecx_6 != 0 && *(ecx_6 + 4) == 0x13)
    if (arg1[0xe] == 0 && *(ecx_6 + 0x20) == 0xf0000)
        int32_t eax_33 = *(edi_1 + 0x30)
        
        if (eax_33 == 0x15 || eax_33 == 0x17)
            *(ecx_6 + 0x20) = 0x70000
        else if (eax_33 == 0x18)
            *(ecx_6 + 0x20) = 0x30000
    
    int32_t edx_3 = *(ecx_6 + 0x10)
    int32_t eax_41 = ((edx_3 | 0xfffffff8) << 0x14 | (edx_3 & 0x18)) << 8
        | (*(edi_1 + 0x34) & 0xff00000) | (*(ecx_6 + 0x18) & 0x7ff) | (*(ecx_6 + 0x20) & 0xf0000)
    
    if (*(ecx_6 + 0x28) != 0)
        eax_41 |= 0x2000
    
    arg1[0x16][arg1[0x17]] = eax_41
    arg1[0x17] += 1
    void* ecx_7 = *(ecx_6 + 0x28)
    eax_32 = arg1[0x17]
    
    if (ecx_7 != 0)
        int32_t edx_12 = *(ecx_7 + 0x10)
        arg1[0x16][eax_32] = ((edx_12 | 0xfffffff8) << 0x14 | (edx_12 & 0x18)) << 8
            | (*(ecx_7 + 0x14) & 0xf000000) | (*(ecx_7 + 0x18) & 0x7ff)
            | (*(ecx_7 + 0x24) & 0xff0000)
        arg1[0x17] += 1
        eax_32 = arg1[0x17]

void* ecx_11 = *(edi_1 + 0x40)

if (ecx_11 != 0 && *(ecx_11 + 4) == 0x13)
    int32_t edx_18 = *(ecx_11 + 0x10)
    arg1[0x16][eax_32] = ((edx_18 | 0xfffffff8) << 0x14 | (edx_18 & 0x18)) << 8
        | (*(ecx_11 + 0x14) & 0xf000000) | (*(ecx_11 + 0x18) & 0x7ff)
        | (*(ecx_11 + 0x24) & 0xff0000)
    arg1[0x17] += 1
    eax_32 = arg1[0x17]

int32_t ecx_15 = *(edi_1 + 0x30)

if (ecx_15 == 0x51)
    arg2 = nullptr
    void* ebx_23 = edi_1 + 0x44
    
    do
        void* ecx_17 = *ebx_23
        
        if (ecx_17 == 0)
            break
        
        int32_t edx_24 = *(ecx_17 + 0x10)
        
        if (edx_24 s>= 5 && edx_24 s<= 8)
            arg1[0x16][eax_32] = fconvert.s(fconvert.t(*(ecx_17 + 0x18)))
        
        arg1[0x17] += 1
        arg2 += 1
        eax_32 = arg1[0x17]
        ebx_23 += 4
    while (arg2 u< 4)
else if (ecx_15 == 0x30)
    arg2 = nullptr
    void* ebx_24 = edi_1 + 0x44
    
    do
        void* ecx_20 = *ebx_24
        
        if (ecx_20 == 0)
            break
        
        int32_t edx_27 = *(ecx_20 + 0x10) - 1
        
        if (edx_27 == 1 || edx_27 == 3)
            arg1[0x16][eax_32] = *(ecx_20 + 0x18)
        
        arg1[0x17] += 1
        arg2 += 1
        eax_32 = arg1[0x17]
        ebx_24 += 4
    while (arg2 u< 4)
else if (ecx_15 != 0x2f)
    arg2 = nullptr
    void* var_8_2 = edi_1 + 0x44
    
    do
        void* eax_44 = *var_8_2
        
        if (eax_44 == 0)
            break
        
        if (arg1[0xe] == 0 && *(eax_44 + 0x24) == 0xe40000)
            int32_t ecx_24 = *(edi_1 + 0x30)
            
            if (ecx_24 == 6 || ecx_24 == 7 || ecx_24 == 0xe || ecx_24 == 0x4e || ecx_24 == 0xf
                    || ecx_24 == 0x4f)
                *(eax_44 + 0x24) = 0xff0000
        
        int32_t edx_33 = *(eax_44 + 0x10)
        int32_t ecx_32 = ((edx_33 | 0xfffffff8) << 0x14 | (edx_33 & 0x18)) << 8
            | (*(eax_44 + 0x14) & 0xf000000) | (*(eax_44 + 0x18) & 0x7ff)
            | (*(eax_44 + 0x24) & 0xff0000)
        
        if (*(eax_44 + 0x28) != 0)
            ecx_32 |= 0x2000
        
        arg1[0x16][arg1[0x17]] = ecx_32
        arg1[0x17] += 1
        void* eax_45 = *(eax_44 + 0x28)
        
        if (eax_45 != 0)
            if (arg1[0xe] != 0)
                int32_t ecx_33 = *(eax_45 + 0x10)
                arg1[0x16][arg1[0x17]] = ((ecx_33 | 0xfffffff8) << 0x14 | (ecx_33 & 0x18)) << 8
                    | (*(eax_45 + 0x14) & 0xf000000) | (*(eax_45 + 0x18) & 0x7ff)
                    | (*(eax_45 + 0x24) & 0xff0000)
                arg1[0x17] += 1
            else if (*(eax_45 + 0x10) != 3 || *(eax_45 + 0x14) != 0 || *(eax_45 + 0x18) != 0
                    || *(eax_45 + 0x24) != 0)
                sub_42aba3(*arg1, edi_1 + 0x10, 0x7d7, 
                    "only a0.x is allowed as a relative address register in vs_1_1")
                arg1[0x13] = 1
        
        arg2 += 1
        var_8_2 += 4
    while (arg2 u< 4)
else
    int32_t edx_32
    edx_32.b = *(*(edi_1 + 0x44) + 0x18) != 0
    arg1[0x16][eax_32] = edx_32
    arg1[0x17] += 1

if (arg1[0x17] != eax_19)
    sub_42aba3(*arg1, edi_1 + 0x10, 0, "internal error: instruction size mismatch")
    arg1[0x13] = 1

if (var_c == 0)
    if (sub_47ed70(arg1, edi_1 + 0x10) s< 0)
        arg1[0x14] = 1
else
    arg1[0x19] = arg1[0x17]

return 0
