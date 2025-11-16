// 函数: sub_4bfa39
// 地址: 0x4bfa39
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t eax
int32_t ecx
eax, ecx = sub_49f4eb(arg1, 0xabfed8, 0x311, 1, 4)
int32_t var_34 = ecx
int32_t var_38 = ecx
var_38.q = fconvert.d(float.t(0))
int32_t eax_1
int32_t ecx_2
eax_1, ecx_2 = sub_49f544(arg1, eax, 0, 0, var_38)
int32_t var_34_1 = ecx_2
int32_t var_38_1 = ecx_2
var_38_1.q = fconvert.d(float.t(1))
int16_t top = 0
arg1[0x110] = eax_1
arg1[0x111] = sub_49f544(arg1, eax, 0, 1, var_38_1)
bool cond:0 = zx.d((arg1[0x32]).w) != 0x104
arg1[0x113] = 0
int32_t edi_1

if (not(cond:0))
    int32_t i = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_5 = arg1[6]
            arg1[0x3f] = i
            int32_t* eax_6 = *(eax_5 + (i << 2))
            arg1[0x40] = eax_6
            
            if ((*eax_6 & 0xfff00000) == 0x60700000)
                edi_1 = sub_4b4ba2(arg1)
                
                if (edi_1 s< 0)
                    return edi_1
            
            i += 1
        while (i u< arg1[3])
    
    sub_4c8264(arg1)
    sub_4a4f2f(arg1)

bool cond:1_1 = arg1[3] u<= 0
int32_t var_10 = 0
int32_t i_1 = 0

if (not(cond:1_1))
    do
        int32_t* eax_11 = *(arg1[6] + (i_1 << 2))
        arg1[0x40] = eax_11
        int32_t j = 0
        
        if (eax_11[1] u> 0)
            int32_t* edx_1 = eax_11[2]
            
            do
                void* ecx_9 = *(arg1[5] + (*edx_1 << 2))
                int16_t ebx_2 = (*(*(arg1[4] + (*(ecx_9 + 4) << 2)) + 4)).w
                
                if ((ebx_2.b & 0x10) != 0 && (ebx_2:1.b & 2) == 0 && *(ecx_9 + 0x10) == 3
                        && *(ecx_9 + 0x6c) == 3
                        && ((*eax_11 & 0xfff00000) != 0x60700000 || j != 7))
                    uint32_t var_34_2 = zx.d((arg1[0x32]).b)
                    void* var_40_1 = eax_11[0xf]
                    var_10 = 1
                    sub_4a4100(arg1, var_40_1, 0x11a0, 
                        "cannot access texture coordinate w-component in a general way in ps_1_%i")
                    break
                
                j += 1
                edx_1 = &edx_1[1]
            while (j u< *(arg1[0x40] + 4))
        
        int32_t* eax_12 = arg1[0x40]
        int32_t ecx_16 = *eax_12 & 0xfff00000
        
        if (ecx_16 == 0x60600000 || ecx_16 == 0x60b00000 || ecx_16 == 0x60100000
                || ecx_16 == 0x61000000)
            sub_4a4100(arg1, eax_12[0xf], 0x11b4, 
                "cannot map expression to pixel shader instruction set")
            var_10 = 1
        
        i_1 += 1
    while (i_1 u< arg1[3])

if (not(cond:1_1) && var_10 != 0)
    return 0x80004005

int32_t i_2 = 0

if (arg1[2] u> 0)
    do
        *(*(arg1[5] + (i_2 << 2)) + 0x38) = 0xffffffff
        int32_t* eax_17 = *(arg1[5] + (i_2 << 2))
        
        if (eax_17[1] == arg1[0x20])
            if (eax_17[0x1b].b == 1)
                *eax_17 = 0x14
            
            if (zx.d((arg1[0x32]).w) u< 0x104)
                int32_t* eax_21 = *(arg1[5] + (i_2 << 2))
                
                if (eax_21[0x1b].b == 3)
                    *eax_21 = 0x14
        
        i_2 += 1
    while (i_2 u< arg1[2])

int32_t i_3 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_22 = arg1[6]
        arg1[0x3f] = i_3
        int32_t* eax_23 = *(eax_22 + (i_3 << 2))
        arg1[0x40] = eax_23
        int32_t edx_3 = *eax_23 & 0xfff00000
        
        if (edx_3 == 0x60000000 || edx_3 == 0x60500000 || edx_3 == 0x60a00000
                || edx_3 == 0x60f00000)
            int32_t j_1 = 0
            
            if (eax_23[3] u> 0)
                do
                    **(arg1[5] + (*(*(arg1[0x40] + 0x10) + (j_1 << 2)) << 2)) = 0x14
                    j_1 += 1
                while (j_1 u< *(arg1[0x40] + 0xc))
        
        i_3 += 1
        *(arg1[0x40] + 0x24) = 0
    while (i_3 u< arg1[3])

int32_t i_4 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_30 = arg1[6]
        arg1[0x3f] = i_4
        int32_t* eax_31 = *(eax_30 + (i_4 << 2))
        arg1[0x40] = eax_31
        int32_t eax_33 = *eax_31 & 0xfff00000
        
        if (eax_33 == 0x20000000 || eax_33 == 0x20100000 || eax_33 == 0x30000000)
            edi_1 = sub_4c9d4c(arg1)
            
            if (edi_1 s< 0)
                return edi_1
        
        i_4 += 1
    while (i_4 u< arg1[3])

int32_t i_5 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_35 = arg1[6]
        arg1[0x3f] = i_5
        int32_t* eax_36 = *(eax_35 + (i_5 << 2))
        arg1[0x40] = eax_36
        int32_t eax_38 = *eax_36 & 0xfff00000
        int32_t eax_39
        
        if (eax_38 == 0x10000000)
            eax_39 = sub_4b5028(arg1)
        label_4bfd64:
            
            if (eax_39 s< 0)
                return eax_39
        else if (eax_38 == 0x10100000)
            eax_39 = sub_4b5154(arg1)
            goto label_4bfd64
        i_5 += 1
    while (i_5 u< arg1[3])

sub_4c8264(arg1)
int32_t i_6 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_40 = arg1[6]
        arg1[0x3f] = i_6
        int32_t* eax_41 = *(eax_40 + (i_6 << 2))
        arg1[0x40] = eax_41
        int32_t eax_43 = *eax_41 & 0xfff00000
        int32_t eax_44
        
        if (eax_43 == 0x10100000)
            sub_4d3a58(arg1, 0)
        label_4bfdfa:
            eax_44 = sub_4d4d85(arg1)
        label_4bfdff:
            
            if (eax_44 s< 0)
                return eax_44
        else
            if (eax_43 == 0x20400000)
                sub_4d4e25(arg1)
                sub_4d479e(arg1)
                sub_4d4bfd(arg1, nullptr)
                eax_44 = sub_4d4a9b(arg1)
                goto label_4bfdff
            
            if (eax_43 == 0x20500000)
                sub_4d4a9b(arg1)
                goto label_4bfdfa
            
            if (eax_43 == 0x50000000)
                eax_44 = sub_4cbb85(arg1)
                goto label_4bfdff
        i_6 += 1
    while (i_6 u< arg1[3])

sub_4c8264(arg1)
int32_t i_7 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_45 = arg1[6]
        arg1[0x3f] = i_7
        int32_t* eax_46 = *(eax_45 + (i_7 << 2))
        arg1[0x40] = eax_46
        int32_t eax_48 = *eax_46 & 0xfff00000
        
        if (eax_48 == 0x20400000 || eax_48 == 0x20500000)
            int32_t eax_49 = sub_4b7376(arg1)
            top -= 1
            unimplemented  {call 0x4b7376}
            
            if (eax_49 s< 0)
                return eax_49
        
        i_7 += 1
    while (i_7 u< arg1[3])

sub_4c8264(arg1)
int32_t i_8 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_50 = arg1[6]
        arg1[0x3f] = i_8
        int32_t* eax_51 = *(eax_50 + (i_8 << 2))
        arg1[0x40] = eax_51
        
        if ((*eax_51 & 0xfff00000) == 0x60f00000)
            edi_1 = sub_4b68be(arg1, 1)
            
            if (edi_1 s< 0)
                return edi_1
            
            edi_1 = sub_4b68be(arg1, 0)
            
            if (edi_1 s< 0)
                return edi_1
        
        i_8 += 1
    while (i_8 u< arg1[3])

sub_4c8264(arg1)
int32_t i_9 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_56 = arg1[6]
        arg1[0x3f] = i_9
        int32_t* eax_57 = *(eax_56 + (i_9 << 2))
        arg1[0x40] = eax_57
        
        if ((*eax_57 & 0xfff00000) == 0x20400000)
            edi_1 = sub_4b6f9a(arg1)
            
            if (edi_1 s< 0)
                return edi_1
        
        i_9 += 1
    while (i_9 u< arg1[3])

sub_4c8264(arg1)
int32_t i_10 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_61 = arg1[6]
        arg1[0x3f] = i_10
        int32_t* eax_62 = *(eax_61 + (i_10 << 2))
        arg1[0x40] = eax_62
        
        if ((*eax_62 & 0xfff00000) == 0x70300000)
            sub_4d4fc2(arg1)
            edi_1 = sub_4cf3e5(arg1, 0)
            
            if (edi_1 s< 0)
                return edi_1
        
        i_10 += 1
    while (i_10 u< arg1[3])

int32_t eax_66 = arg1[3]
int32_t ebx_5 = 0

if (eax_66 u> 0)
    do
        int32_t eax_67 = arg1[6]
        arg1[0x3f] = ebx_5
        arg1[0x40] = *(eax_67 + (ebx_5 << 2))
        edi_1 = sub_4b6303(arg1)
        
        if (edi_1 s< 0)
            return edi_1
        
        ebx_5 += 1
    while (ebx_5 u< eax_66)

sub_4c8264(arg1)
edi_1 = sub_4cffb6(arg1)

if (edi_1 s>= 0)
    edi_1 = sub_4b6d4b(arg1)
    
    if (edi_1 s>= 0)
        edi_1 = sub_4b5743(arg1)
        
        if (edi_1 s>= 0)
            int16_t eax_73 = (arg1[0x32]).w
            
            if (zx.d(eax_73) != 0x104)
                if (arg1[3] u> 0x80)
                    uint32_t var_34_9 = zx.d(eax_73.b)
                    sub_4a4100(arg1, nullptr, 0x1194, 
                        "program is order of magnitude too large to compile to ps_1_%i")
                    return 0x80004005
                
                edi_1 = sub_4b8571(arg1)
                
                if (edi_1 s>= 0)
                    if (arg1[0x8b] == 0)
                    label_4c03ee:
                        
                        if (arg1[0x8c] == 0 || zx.d((arg1[0x32]).w) == 0x104)
                        label_4c043f:
                            arg1[0x37] = 0
                            edi_1 = sub_4bb1e7(arg1, 0, 0)
                            
                            if (edi_1 s>= 0)
                            label_4c0456:
                                arg1[0x37] = 1
                                edi_1 = sub_4ba6d9(arg1)
                                
                                if (edi_1 s>= 0)
                                    sub_4bdf60(arg1, arg1[0x8b], nullptr, arg1[0x88], nullptr)
                                    sub_4bdf60(arg1, arg1[0x8c], nullptr, arg1[0x89], nullptr)
                                    sub_4b534e(arg1)
                                    
                                    if (arg1[0x8c] != 0 && zx.d((arg1[0x32]).w) != 0x104)
                                        sub_4b4ac3(arg1)
                                    
                                    return 0
                        else
                            edi_1 = sub_4b59b6(arg1)
                            
                            if (edi_1 s>= 0)
                                edi_1 = sub_4be70d(arg1)
                                
                                if (edi_1 s>= 0)
                                    edi_1 = sub_4b5d8b(arg1)
                                    
                                    if (edi_1 s>= 0)
                                        goto label_4c043f
                    else
                        edi_1 = sub_4b5590(arg1)
                        
                        if (edi_1 s>= 0)
                            if (arg1[0x8b] == 0 || zx.d((arg1[0x32]).w) == 0x104)
                                goto label_4c03ee
                            
                            edi_1 = sub_4bf3fe(arg1)
                            
                            if (edi_1 s>= 0)
                                goto label_4c03ee
            else
                int32_t eax_74 = sub_745f3f(0x800)
                arg1[0x8b] = eax_74
                int32_t eax_75
                
                if (eax_74 != 0)
                    eax_75 = sub_745f3f(0x800)
                    arg1[0x8c] = eax_75
                
                if (eax_74 == 0 || eax_75 == 0)
                    return 0x8007000e
                
                int32_t edi_6 = arg1[0x8b]
                arg1[0x89] = 0
                arg1[0x88] = 0
                __builtin_memset(edi_6, 0, 0x800)
                __builtin_memset(arg1[0x8c], 0, 0x800)
                edi_1 = sub_4b8cf5(arg1)
                
                if (edi_1 s>= 0)
                    edi_1 = sub_4b9255(arg1)
                    
                    if (edi_1 s>= 0)
                        if (sub_4b93bd(arg1) != 0)
                            return 0x80004005
                        
                        int32_t eax_79 = sub_4b92e3(arg1)
                        
                        if (eax_79 != 0xffffffff)
                            int32_t ecx_53 = sub_4b8b4f(arg1)
                            var_10 = 0
                            void* edi_8 = &arg1[0xc1]
                            bool cond:8_1
                            
                            do
                                int32_t var_34_4 = ecx_53
                                unimplemented  {fldz }
                                int32_t var_38_2 = ecx_53
                                var_38_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                unimplemented  {fstp qword [esp], st0}
                                int32_t eax_80 = sub_49f544(arg1, arg1[0x22], 0, 0, var_38_2)
                                *edi_8 = eax_80
                                
                                if (eax_80 == 0xffffffff)
                                    return 0x8007000e
                                
                                ecx_53 = arg1[5]
                                void* eax_81 = *(ecx_53 + (eax_80 << 2))
                                var_10 += 1
                                edi_8 += 4
                                cond:8_1 = var_10 u< 0x40
                                *(eax_81 + 0x3c) = 0
                            while (cond:8_1)
                            int32_t var_14_1 = 0xffffffff
                            int32_t var_20_1 = 0xffffffff
                            __builtin_memset(&arg1[0xb1], 0, 0x40)
                            int32_t var_8_1 = 0
                            
                            if (eax_79 u> 0)
                                do
                                    __builtin_memset(arg1[0x8b], 0, 0x800)
                                    __builtin_memset(arg1[0x8c], 0, 0x800)
                                    arg1[0x88] = 0
                                    arg1[0x89] = 0
                                    
                                    if (sub_4b9666(arg1, var_8_1, 1) != 0)
                                        arg1[0x102] = 0
                                        arg1[0x101] = 0
                                        sub_4b8c48(arg1)
                                        int32_t var_1c
                                        sub_4bdf60(arg1, arg1[0x8b], 6, arg1[0x88], &var_1c)
                                        sub_4bdf60(arg1, arg1[0x8c], 6, arg1[0x89], &var_10)
                                        void* edi_12 = &arg1[0xb1]
                                        int32_t i_16 = 0x10
                                        int32_t i_11
                                        
                                        do
                                            void* ecx_59 = *edi_12
                                            
                                            if (ecx_59 != 0)
                                                sub_46cb59(ecx_59, 1)
                                            
                                            *edi_12 = 0
                                            edi_12 += 4
                                            i_11 = i_16
                                            i_16 -= 1
                                        while (i_11 != 1)
                                        edi_1 = sub_4bf01b(arg1)
                                        
                                        if (edi_1 s< 0)
                                            return edi_1
                                        
                                        if (edi_1 != 1 && sub_4b9a45(arg1, nullptr) s>= 0
                                                && sub_4bb1e7(arg1, 1, 1) s>= 0)
                                            sub_4bdf60(arg1, arg1[0x8b], 6, arg1[0x88], &var_1c)
                                            sub_4bdf60(arg1, arg1[0x8c], 6, arg1[0x89], &var_10)
                                            int32_t* eax_86 = arg1[0x8c]
                                            int32_t edx_4 = 0
                                            int32_t var_c_1 = 0
                                            int32_t* ecx_66 = arg1[0x8b] - eax_86
                                            int32_t i_15 = 6
                                            int32_t i_12
                                            
                                            do
                                                if (*(ecx_66 + eax_86) != 0)
                                                    edx_4 += 1
                                                
                                                if (*eax_86 != 0)
                                                    var_c_1 += 1
                                                
                                                eax_86 = &eax_86[1]
                                                i_12 = i_15
                                                i_15 -= 1
                                            while (i_12 != 1)
                                            int32_t ecx_67 = var_1c
                                            int32_t eax_87 = edx_4 * 2
                                            int32_t var_18_1 = ecx_67
                                            
                                            if (ecx_67 u<= eax_87)
                                                var_18_1 = eax_87
                                            
                                            int32_t edi_13 = var_10
                                            int32_t eax_89 = var_c_1 * 2
                                            
                                            if (var_10 u<= eax_89)
                                                edi_13 = eax_89
                                            
                                            int32_t eax_90 = edx_4 + ecx_67
                                            int32_t eax_91 = neg.d(eax_90)
                                            int32_t eax_95 = (sbb.d(eax_91, eax_91, eax_90 != 0)
                                                & 0xa) + edi_13 + var_18_1
                                            
                                            if (ecx_67 u> 8)
                                                eax_95 += 0x14
                                            
                                            if (var_10 u> 8)
                                                eax_95 += 0x14
                                            
                                            if (eax_95 u< var_20_1)
                                                var_14_1 = var_8_1
                                                var_20_1 = eax_95
                                            
                                            arg1[0x101] = 0
                                    
                                    var_8_1 += 1
                                while (var_8_1 u< eax_79)
                            
                            __builtin_memset(arg1[0x8b], 0, 0x800)
                            __builtin_memset(arg1[0x8c], 0, 0x800)
                            arg1[0x88] = 0
                            arg1[0x89] = 0
                            void* edi_16 = &arg1[0xb1]
                            int32_t i_14 = 0xc
                            int32_t i_13
                            
                            do
                                void* ecx_69 = *edi_16
                                
                                if (ecx_69 != 0)
                                    sub_46cb59(ecx_69, 1)
                                
                                *edi_16 = 0
                                edi_16 += 4
                                i_13 = i_14
                                i_14 -= 1
                            while (i_13 != 1)
                            
                            if (var_14_1 != 0xffffffff)
                                sub_4b9666(arg1, var_14_1, 0)
                                sub_4b8c48(arg1)
                                sub_4bf01b(arg1)
                                edi_1 = sub_4b9a45(arg1, nullptr)
                                
                                if (edi_1 s>= 0)
                                    edi_1 = sub_4bb1e7(arg1, 0, 0)
                                    
                                    if (edi_1 s>= 0)
                                        int32_t* eax_99 = arg1[0x8b]
                                        int32_t ecx_75 = 0
                                        
                                        while (*eax_99 == 0)
                                            ecx_75 += 1
                                            eax_99 = &eax_99[1]
                                            
                                            if (ecx_75 u>= 6)
                                                break
                                        
                                        if (arg1[0x88] == 6 && ecx_75 == 6)
                                            arg1[0x88] = 0
                                        
                                        goto label_4c0456
                            else
                                edi_1 = 0x80004005
                                sub_4a4100(arg1, nullptr, 0x1194, 
                                    "program too complex to compile to ps_1_4")
                        else
                            edi_1 = 0x80004005
                            sub_4a4100(arg1, nullptr, 0x1194, 
                                "shader too complex. Try reducing number of texture loads used")

return edi_1
