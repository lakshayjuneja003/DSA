package DAY-14;

public class LevelOrderTraversel {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        levelOrderTraversal(root , result);
        return result;
    }
    public void levelOrderTraversal(TreeNode root, List<List<Integer>> result) {
        if (root == null) return;

        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);

        while (!q.isEmpty()) {
            int levelSize = q.size();
            List<Integer> temp1 = new ArrayList<>();

            for (int i = 0; i < levelSize; i++) {
                TreeNode temp = q.poll(); 
                temp1.add(temp.val);

                if (temp.left != null) q.add(temp.left);
                if (temp.right != null) q.add(temp.right);
            }

            result.add(temp1);
        }
    }
} {
    
}
