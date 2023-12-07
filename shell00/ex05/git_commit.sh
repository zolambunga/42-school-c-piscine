#!/bin/bash
cd /nfs/homes/zmbunga/shell00zola/proj_shell00/ex05
git log -n 6 --pretty=format:"%H" | while read -r id_commit; do
  echo "$id_commit"
done
