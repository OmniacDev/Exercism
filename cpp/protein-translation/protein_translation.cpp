#include "protein_translation.h"

using namespace std;

namespace protein_translation {
    const vector<string> stop = {"UAA", "UAG", "UGA"};
    
    const vector<vector<string>> protein_codons = {{"AUG"}, {"UUU", "UUC"}, {"UUA", "UUG"}, {"UCU", "UCC", "UCA", "UCG"}, {"UAU", "UAC"}, {"UGU", "UGC"}, {"UGG"}};
    const vector<string> protein_names = {"Methionine", "Phenylalanine", "Leucine", "Serine", "Tyrosine", "Cysteine", "Tryptophan"};
    
    vector<string> proteins(const string& str) {
        vector<string> codons;
        codons.reserve((str.length() / 3));
        
        for (size_t i = 0; i < (str.length() / 3); i++) {
            codons.push_back(str.substr(i * 3, 3));
        }
        
        vector<string> proteins;

        bool STOP = false;
        for (const auto &codon: codons) {
            if (STOP) break;
            
            for (const auto &stop_codon: stop) {
                if (codon == stop_codon) { 
                    STOP = true;
                    break;
                };
            }

            bool FOUND = false;
            for (size_t i = 0; i < protein_codons.size(); i++) {
                if (FOUND) break;
                
                const vector<string>& protein_codon = protein_codons[i];
                for (const auto &prot: protein_codon) {
                    if (codon == prot) {
                        proteins.push_back(protein_names[i]);
                        FOUND = true;
                        break;
                    }
                }
            }
        }
        
        return proteins;
    }
}  // namespace protein_translation
